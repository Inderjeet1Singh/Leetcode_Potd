/* 02-05-24 Day2 */
// Question Number 2441  Largest Positive Integer That Exists With Its Negative 
// Link https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-02
//Solution 

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //sort the given vector
        int start=0,end=nums.size()-1; //initialize two pointer
        while(nums[end]>0  && nums[start]<0 && start<end){
                if(abs(nums[start])==(nums[end])){
                    return nums[end];
                }
                else if(abs(nums[start])>nums[end]){
                    start++;
                } else {
                    end--;
                }
        }
        return -1;
        
    }
};
