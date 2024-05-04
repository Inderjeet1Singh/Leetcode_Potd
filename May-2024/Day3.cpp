/* 03-05-24 Da3 */
// Question Number 165  Compare Version Numbers
// Link https://leetcode.com/problems/compare-version-numbers/?envType=daily-question&envId=2024-05-03
//Solution 

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0;
        int j = 0;
        while(i<version1.length() && j<version2.length()){
            long long num1 = 0;
            long long num2 = 0;
            while(i<version1.length() && version1[i]!='.'){
                num1 = num1*10 + (long long)(version1[i++])-48;
            }
            while( j<version2.length() && version2[j]!='.'){
                num2 = num2*10 + (long long)(version2[j++])-48;
            }
            if(num1!=num2){
                if(num1>num2) return 1;
                else return -1;
            }
            i++;j++;
        }
            while(i<version1.length()){
                if(version1[i]!='0' && version1[i]!='.') return 1;
                else i++;
            }
            while(j<version2.length()){
                if(version2[j]!='0' && version2[j]!='.') return -1;
                else j++;
            }
        return 0;
    }
};
