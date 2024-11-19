class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int i=0;
        int j=0;
        long long sum = 0;
        long long ans = 0;
        while(j<nums.size() && i<nums.size()){
            mp[nums[j]]++;
            if(mp[nums[j]]>1){
                while(mp[nums[j]]>1 && i<nums.size()){
                    sum -= nums[i];
                    mp[nums[i]]--;
                    i++;
                }
                sum += nums[j];
                j++;
            }
            else{
                sum += nums[j];
                if(j-i+1==k){
                    ans = max(ans,sum);
                    sum -= nums[i];
                    mp[nums[i]]--;
                    i++;
                    j++;
                } 
                else
                j++;
            }
        }
        return ans;
    }
};
