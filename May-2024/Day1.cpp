/* Question Number 2000 on Leetcode here is Link https://leetcode.com/problems/reverse-prefix-of-word/?envType=daily-question&envId=2024-05-01 */
//My Solution

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i =0,j=0; //initialize two pointer
        while( j<word.length() && word[j]!=ch){
            j++; // moving j while it cannot move to given ch
        }
        while(i<=j && j<word.length()){
            swap(word[i++],word[j--]); //swap
        }
        return word;
    }
};
