class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0)return ans;
        if(k<0){
            int p=-(k);
            for(int i=0;i<n;i++){
                int count=0;
                int sum=0;
                int j;
                if(i-1<0){
                    j=n-1;
                }
                else{
                    j=i-1;
                }
                while(count<p){
                    sum=sum+code[j];
                    if(j-1>=0){
                        j--;
                    }
                    else{
                        j=n-1;
                    }
                    count++;
                }
                ans[i]=sum;

            }
        }
        else{
            for(int i=0;i<n;i++){
                int count=0;
                int sum=0;
                int j;
                if(i+1>n-1){
                    j=0;
                }
                else{
                    j=i+1;
                }
                while(count<k){
                    sum=sum+code[j];
                    if(j+1>n-1){
                        j=0;
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                ans[i]=sum;
            }
        }
       return ans;
    }
};
