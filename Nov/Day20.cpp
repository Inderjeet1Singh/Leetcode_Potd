class Solution {
public:
    int takeCharacters(string s, int k) {
        if(k==0) return 0;
        int i=0,j=0;
        int flag = 0,found = -1;
        int ans = INT_MAX;
        int cA=0,cB=0,cC =0;
        int count = 0;
        int countA=0,countB=0,countC=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') countA++;
            if(s[i]=='b') countB++;
            if(s[i]=='c') countC++;
        }
        if(countA<k || countB<k || countC<k) return -1;
        while(i<s.size()){
            // if((cA<k || cB<k || cC<k) && flag==1) return -1;
            if(flag==1 && j>i) return ans;
            if(cA>=k && cB>=k && cC>=k){
                if(j<i){
                    count = (s.size()-i) + j;
                }
                else if(j>i){
                    if(j==s.size()-1) count = j-i+1;
                    else count  = j;
                }
                else{
                    count = j + s.size()-i;
                }
                ans = min(ans,count);
                // cout<<"i="<<i<<","<<"j="<<j<<","<<ans<<"->";
                found = 1;
                if(s[i]=='a') cA--;
                else if(s[i]=='b') cB--;
                else if(s[i]=='c') cC--;
                // cout<<"i-"<<i<<",";
                i++;
            }
            else{
                if(s[j]=='a') cA++;
                else if(s[j]=='b') cB++;
                else cC++;
                // cout<<"j-"<<j<<",";
                j++;
                if(j==s.size()){
                    j=0;
                    flag = 1;
                }
            }
        }
        return ans;
    }
};
