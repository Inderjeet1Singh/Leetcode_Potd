//Day23
// 2597. The Number of Beautiful Subsets

//Solution

class Solution {
public:
    void solve(vector<int> &nums, int &ans, int index,vector<int>ele,int &k){
        if(index == nums.size()){
            return;
        }
        for(int i=index+1;i<nums.size();i++){
            int a = nums[i];
            bool beauty = true;
            for(int j=0;j<ele.size();j++){
                if(abs(a-ele[j])==k){
                    beauty = false;
                    break;
                }
            }
            if(beauty){
                ele.push_back(a);
                ans++;
                solve(nums,ans,i,ele,k);
                ele.pop_back();
            }
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        vector<int> ele;
        solve(nums,ans,-1,ele, k);
        return ans;    
    }
};
