class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        vector<vector<char>> result(n, vector<char>(m, '.'));
        for (int r = 0, tc = m - 1; r < m; r++, tc--) {
            int nextPos = n - 1;
            for (int c = n - 1; c >= 0; c--) {
                char current = box[r][c];
                if (current == '*') {
                    nextPos = c - 1;
                    result[c][tc] = current;
                } else if (current == '#') {
                    result[nextPos][tc] = current;
                    nextPos--;
                    box[r][c] = '.';
                }
            }
        }

        return result;
    }
};
