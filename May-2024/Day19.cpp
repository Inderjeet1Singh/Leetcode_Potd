// Day19
// 3068. Find the Maximum Sum of Node Values

//solution

class Solution {
public:
    long long maximumValueSum (vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n=nums.size();
        long long  ans=0;
        int cnt=0,mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
        int val=nums [i]^k;
        ans+=nums[i];
        if(val>nums[i])
        {
        ans+=val-nums [i];
        mn=min(mn,val-nums[i]);
        cnt++;
        }
        else{
        mx=max(mx,val-nums[i]);
        }
        }
        if(cnt & 1)
        {
        return max(ans-mn,ans+mx);
        }
        return ans;
        }
        };
