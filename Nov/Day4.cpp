class Solution {
public:
    string compressedString(string word) {
        int i=0;
        string ans = "";
        int count = 1;
        while(i<word.size()-1){
            if(word[i]==word[i+1]){
                count++;
            }
            else{
                while(count>=9){
                    ans += to_string(9)+ word[i];
                    count -=9;
                }
                if(count>0)
                ans += to_string(count) + word[i];
                count = 1;
            }
            i++;          
    }
     while(count>=9){
                    ans += to_string(9)+ word[i];
                    count -=9;
                }
     if(count>0)
                ans += to_string(count) + word[i];
    return ans;
    }
};
