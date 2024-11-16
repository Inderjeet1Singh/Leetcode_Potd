class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int firstIndexSubArray = INT_MAX;
        if (k == 1)
            return nums;
        for (int i = 0; i < k - 1; i++) {
            if (nums[i] + 1 == nums[i + 1]) {
                firstIndexSubArray = min(firstIndexSubArray, i);
                continue;
            }
            firstIndexSubArray = INT_MAX;
        }
        vector<int> ret;
        if (firstIndexSubArray == 0)
            ret.push_back(nums[k - 1]);
        else 
            ret.push_back(-1);
        for (int i = k - 1; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i + 1]) {
                firstIndexSubArray = min(firstIndexSubArray, i);
            } else {
                firstIndexSubArray = INT_MAX;
            }
            if (firstIndexSubArray <= i + 2 - k )
                ret.push_back(nums[i + 1]);
            else 
                ret.push_back(-1);
        }
        return ret;
    }
};
