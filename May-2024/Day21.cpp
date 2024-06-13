// Day21
// 78. Subsets

// Solution

class Solution {
public:
void SecondSubset(vector<int>& nums,vector<int>temp,vector<vector<int>>&v,int index){
    if(index==nums.size()){
        v.push_back(temp);
        return;
    }
    SecondSubset(nums,temp,v,index+1);
    temp.push_back(nums[index]);
    SecondSubset(nums,temp,v,index+1);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< vector<int>> v;
        vector<int>temp;
        SecondSubset(nums,temp,v,0);
        return v;
    }
};
