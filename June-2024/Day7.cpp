// Day7
// 648. Replace Words

//Solution

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans = "";
        int flag = 0;
        map<string,int>mp;
        for(int i=0;i<dictionary.size();i++){
            mp[dictionary[i]]++;
        }
        string temp ="";
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' '){
                if(flag==0){
                 ans += temp;
                 ans +=" ";
                }
                temp = "";
                flag = 0;
            }
            else {
                temp += sentence[i];
                if(mp[temp]==1 && flag==0){
                    flag = 1;
                    ans += temp;
                    ans += " ";
                }
            }
        }
        if(flag==0){
            ans += temp;
        }
        else ans.pop_back();
        return ans;
    }
};
