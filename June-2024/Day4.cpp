// Day4
// 409 Longest Palindrome

// Solution

class Solution {
public:
    int longestPalindrome(string s) {
        int hash[256]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        int count = 0,flag = 0;
        for(int i=0;i<256;i++){
            if(hash[i]%2==0 && hash[i]!=0){
                count += hash[i];
            }
            else if(hash[i]!=0 && hash[i]%2!=0) {
                flag = 1;
                count +=hash[i]-1;
                }
        }
        if(flag) return count + 1;
        else return count;
    }
};
