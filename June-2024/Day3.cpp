// Day3
// 2486. Append Characters to String to Make Subsequence

// Solution

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0; // i = point to string s[0] and j = point to string t[0]
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){ // if any character of t is found on s then move i which point to string s and also move j which point to string t
                i++;j++;
            }
            else i++; // if not  found then only move the pointer which point to string s
        }
        return t.length()-j; // return number of last charecters which not in string s
    }
};
