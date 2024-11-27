class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans =0;
        int mini = INT_MAX;
        int count = 0;
        int  x =0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                x = abs(matrix[i][j]);
                mini = min(x,mini);
                ans += abs(matrix[i][j]);
                if(matrix[i][j]<0) count++;
            }
        }
        if(count % 2 !=0) ans -= 2 * mini;
        return ans;
    }
};
