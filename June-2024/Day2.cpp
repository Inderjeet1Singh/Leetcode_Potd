// Day2
// Reverse String

// Solution

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1; // two pointer i = point to start j = point to the end of string 
        while(i<=j){
            swap(s[i++],s[j--]); // swaping the last pointer value with start pointer and increment the start pointer and decrement the end pointer
        }
    }
};
