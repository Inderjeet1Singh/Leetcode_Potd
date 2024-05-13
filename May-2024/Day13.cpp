// Day13 13-05-24
// Question Number --> 861 Score After Flipping Matrix
// Link --> https://leetcode.com/problems/score-after-flipping-matrix/?envType=daily-question&envId=2024-05-13

// Solution 
class Solution {
public:
    void rowswap(vector<vector<int>>& grid,int i){
        for(int k = 0;k<grid[0].size();k++){
            if(grid[i][k]==0) grid[i][k]=1;
            else grid[i][k]=0;
        }
    }
    void colswap(vector<vector<int>>& grid,int k){
        for(int i=0;i<grid.size();i++){
            if(grid[i][k]==0) grid[i][k]=1;
            else grid[i][k]=0;
        }
    }
    int sum(vector<vector<int>>& grid){
        int s = 0;
        for(int i=grid.size()-1;i>=0;i--){
            int k = 0;
            for(int j=grid[0].size()-1;j>=0;j--){
                s +=pow(2,k++) * grid[i][j];
            }
        }
        return s;
    }
    int matrixScore(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int index = -1;
        for(int i=0;i<r;i++){
                if(grid[i][0]==0)
                {
                    rowswap(grid,i);
                }
            }
       for(int i=1;i<c;i++){
        int ones = 0, zeros = 0;
        for(int j=0;j<r;j++){
            if(grid[j][i]==0) zeros++;
            else ones++;
        }
        if(ones<zeros) colswap(grid,i);
       }
       return sum(grid);
    }
};
