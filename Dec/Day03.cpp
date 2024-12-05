class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int i=0;
        int j = 0;
        while(i<spaces.size() && j<s.size()){
                if(j==spaces[i])
                {
                    ans += " ";
                    i++;
                }
                else
                {
                    ans += s[j];
                    j++;
                    
                }
            
        }
        while(j<s.size()){
            ans += s[j];
            j++;
        }
        return ans;
    }
};
