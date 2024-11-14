class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int start = 1,end = 0;
        for(auto e : quantities){
            if(end<e){
                end = e;
            }
        }
        int mid = 0 , sum = 0,ans = 0;
        while(start<=end){ // Binary Search from 1 to maximum element to get Answer
             mid = start + (end - start)/2;
            sum = 0;
            for(int i=0;i<quantities.size();i++){
                sum += (quantities[i] + mid -1)/mid; 
            }
            if(sum<=n){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
