class Solution {
public:
int numberOfSetBit(int num){
    int count = 0;
    while (num) 
    {
            num = num & (num - 1);
            count++;
    }
    return count;
}
    bool canSortArray(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            i=0;
        while(i<nums.size()-1){
            if(nums[i]>nums[i+1]){
                if(numberOfSetBit(nums[i])==numberOfSetBit(nums[i+1])){
                    swap(nums[i],nums[i+1]);
                }
                else{
                    return false;
                }
            }
            i++;
        }
        }
        for(auto e:nums) cout<<e<<",";
        return true;
    }
};
