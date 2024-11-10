class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        int i = 0, j = 0;
        int OR = 0;
        vector<int> bits(32, 0);

        while (j < nums.size()) {
            OR |= nums[j];
            for (int m = 0; m < 32; m++) {
                bits[m] += ((nums[j] >> m) & 1);
            }

            while (OR >= k && i <= j) {
                ans = min(ans, j - i + 1);
                for (int m = 0; m < 32; m++) {
                    if ((nums[i] >> m) & 1) {
                        bits[m]--;
                        if (bits[m] == 0) {
                            OR &= ~(1 << m);
                        }
                    }
                }
                i++;
            }
            j++;
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};
