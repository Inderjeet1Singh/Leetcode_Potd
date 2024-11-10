class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxi = pow(2,maximumBit)-1;
        vector<int>ans(nums.size(),0);
        int XOR = 0;
        for(auto e : nums){
            XOR ^= e;
        }
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            ans[i] =  maxi ^ XOR; 
            XOR ^= nums[j--];
        }
        return ans;
    }
};
