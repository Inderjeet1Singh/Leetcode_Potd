class Solution {
public:
    string makeFancyString(string s) {
        int i=0,j=1,k=2;
        string str="";
        while(k<s.length()){
            if(s[i]==s[j] && s[j]==s[k]){
               str += s[i];
               str += s[j];
               while(s[k]==s[j]) k++;
               i = k;
               j = i+1;
               k = j+1;
            }
            else{
                str += s[i];
                i++;j++;k++;
            }
        }
        while(i<s.size()){
            str += s[i];
            i++;
        }
        return str;
    }
};
