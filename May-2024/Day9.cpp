// Day9 09-05-24
// Queation Number --> 3075 Maximize Happiness of Selected Children
// Link --> https://leetcode.com/problems/maximize-happiness-of-selected-children/?envType=daily-question&envId=2024-05-09

//Solution
class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long sum = 0;
        sort(h.begin(),h.end());
        int count = 0;
        int i=h.size()-1;
        while(k>0 && i>=0){
            if(h[i]-count<0) break;
            sum +=h[i--]-count;
            count++; k--;
        }
        return sum;
    }
};
