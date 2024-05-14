// Day14 14-05-24
// Question Number -->1219 Path with Maximum Gold
// Link --> https://leetcode.com/problems/path-with-maximum-gold/?envType=daily-question&envId=2024-05-14

// Solution 

class Solution {
public:
    int help(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) {
            return 0; 
        }
        int ans = grid[i][j]; 
        grid[i][j] = 0;
        int maxGold = ans + max({help(grid, i, j + 1), help(grid, i, j - 1), help(grid, i + 1, j), help(grid, i - 1, j)});   
        grid[i][j] = ans; 
        return maxGold;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] != 0) { 
                    maxGold = max(maxGold, help(grid, i, j));
                }
            }
        }
        return maxGold;
    }
};
