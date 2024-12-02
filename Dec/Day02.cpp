class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index  = -1; 
        int j = 0,i=0;
        while(i<sentence.size()){
            j=0;
            if(sentence[i]==searchWord[j]){
                int k = i;
                while(j<searchWord.size()){
                    if(sentence[k]==searchWord[j]){
                        j++;
                        k++;
                    }
                    else break;
                }
                if(j==searchWord.size()){
                    index = i;
                    break;
                }
                else{
                     while(i<sentence.size() && sentence[i]!=' ' ) i++;
                        i++;
                }
            }
            else{
                while(i<sentence.size() && sentence[i]!=' ' ) i++;
                i++;
            }
        }
        int count = 0;
        j = 0;
        if(index ==-1) return index;
        while(j!=index){
            if(sentence[j]==' ') count++;
            j++;
        }
        return count + 1;
    }
};
