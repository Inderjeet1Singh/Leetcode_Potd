class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0 , j = 0;
        while(i<str1.size() && j<str2.size()){
            if((str2[j] - str1[i])==1 || (str2[j] - str1[i])==-25 || (str2[j] - str1[i])==0){
                j++;
            }
            i++;
        }
        if(j==str2.size()) return 1;
        return 0;
    }
};