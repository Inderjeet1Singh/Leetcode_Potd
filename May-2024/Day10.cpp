// Day10 10-05-24
// Question Number -->  786 K-th Smallest Prime Fraction
// Link --> https://leetcode.com/problems/k-th-smallest-prime-fraction/description/?envType=daily-question&envId=2024-05-10

// Solution 

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        float frac = 0;
        int j=arr.size()-1;
        float prev =INT_MIN;
        vector<float>ans;
        vector<int>res(2,0);
        int m=0;
        for(int i=0;i<arr.size();i++){
            for(int l=i+1;l<arr.size();l++){
                ans.push_back(float(arr[i])/arr[l]);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<arr.size();i++){
            for(int l=i+1;l<arr.size();l++){
                if((float(arr[i])/arr[l])==ans[k-1]){
                    res[0]=arr[i];
                    res[1]=arr[l];
                     break;
                }
            } }
            return res; 
       
    }
};
