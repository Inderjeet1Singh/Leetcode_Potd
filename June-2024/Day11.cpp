// Day11
// 1122. Relative Sort Array

// Solution

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>hash(10001,0);
        for(int i=0;i<arr1.size();i++){
            hash[arr1[i]]++;
        }
        int k = 0;
        int j = 0;
        while(j<arr1.size() && k<arr2.size()){
            if(hash[arr2[k]]>0){
                arr1[j] = arr2[k];
                hash[arr2[k]]--;
                j++;
            }
            else k++;
        }
        k=0;
        while(j<arr1.size() && k<10001){
            if(hash[k]!=0){
                arr1[j] = k;
                hash[k]--;
                j++;
            }
            else k++;
        }
        return arr1;
    }
};
