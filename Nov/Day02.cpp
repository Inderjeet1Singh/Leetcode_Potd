class Solution {
public:
    bool isCircularSentence(string sentence) {
        int j=0;
        while(j<sentence.length()){
            while(j<sentence.length() && sentence[j]!=' ') j++;
            if(j==sentence.length()){
                if(sentence[j-1]!=sentence[0]) return false;
            }
            else
                if(sentence[j-1]!=sentence[j+1]) return false;
                j++;
        }
        return true; }
};
