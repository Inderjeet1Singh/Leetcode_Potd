class Solution {
public:
    int minChanges(string s) {
        int count = 1;
        int i = 1;
        int ans = 0;
        while(i<s.size()){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                if(count%2!=0) {
                    s[i] = s[i-1];
                    ans++;
                    count++;
                }
                else{
                    count = 1;
                }
            }
            i++;
        }
        return ans;
    }
};
