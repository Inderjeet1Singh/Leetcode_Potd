// Day5
// 1002 Find Common Characters

//Solution

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int same[128];
        for(int i=0;i<128;i++){
            same[i] = INT_MAX;
        }
        for(int i=0;i<words.size();i++){
               int hash[128]={0};
            for(int j=0;j<words[i].size();j++){
                  hash[words[i][j]]++; 
                //   cout<<hash[words[i][j]]<<" ";
       }
       for(int k=0;k<128;k++){
            same[k] = min(same[k],hash[k]); // calculating the minimum number of char which are same from both i.e if second string contain 3 l and first contain 1 then same is only 1 l not 3 l
            // if(k>=97 && k<=122)
            // cout<<same[k]<<" ";
       }    
}
    vector<string>ans;
    for (int i = 97; i < 128 && i <= 127; i++) {
        if (same[i] != 0) {
            int num = same[i]; // number of char(i) which are same 
            while (num--) {
                char ch = (char)i;
                string str = ""; 
                str +=ch; // converting char to string it is also done as string(1,ch);
                ans.push_back(str); // added the string to answer vector
            }
        }
    }
    return ans;
    }
};
