// Day12 12-05-24
// Question Number --> 2373 Largest Local Values in a Matrix
// Link -->  https://leetcode.com/problems/largest-local-values-in-a-matrix/?envType=daily-question&envId=2024-05-12

// Solution

class Solution {
public:
    int maxiele(vector<vector<int>>& grid,int i,int j){
        int maxi = INT_MIN;
        for(int k=i;k<i+3;k++){
            for(int l=j;l<j+3;l++){
                maxi = max(maxi,grid[k][l]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans( n-2 ,vector<int> (n-2)); 
        int p=0,m=0;
        for(int i=0;i<=n-3;i++){
            for(int j=0;j<=n-3;j++){
               ans[i][j]=maxiele(grid,i,j);
            }
        }
        return ans;
    }
};
