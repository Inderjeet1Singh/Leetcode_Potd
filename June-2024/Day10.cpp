// Day 10
// 1051. Height Checker

//solution

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans(heights);
        sort(ans.begin(),ans.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=ans[i]) count++;
        }
        return count;
    }
};
