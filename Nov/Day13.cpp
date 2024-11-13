class Solution {
public:
    int BinarySearchJustGreaterOrEqual(vector<int>&nums,long long ele,int left){
       int right = nums.size()-1;
        int mid = 0;
        int res = -1;
        while(left<=right){
            mid = left + (right - left)/2;
            if(nums[mid]>=ele){
                res = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return res;
    }
    int BinarySearchJustLessOrEqual(vector<int>&nums, long long ele,int left){
        int right = nums.size()-1;
        int mid = 0;
        int res = -1;
        while(left<=right){
            mid = left + (right - left)/2;
            if(nums[mid]<=ele){
                res = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return res;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long diff1 = 0, diff2 = 0;
        int start = 0,end = 0;
        long long count = 0;
        for(int i =0 ; i<nums.size();i++){
            diff1 = lower - nums[i];
            diff2 = upper - nums[i];
            start = BinarySearchJustGreaterOrEqual(nums,diff1,i+1);
            end = BinarySearchJustLessOrEqual(nums,diff2,i+1);
            // cout<<start<<","<<end<<"-->";
            if(start>=0 && end>=0){
                count += end - start +1;
            }
        }
        return count;
    }
};
