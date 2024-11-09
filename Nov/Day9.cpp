class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        n--;
        while(n--){
            ans++;
            ans = ans | x;
        }
        return ans;
    }
};
