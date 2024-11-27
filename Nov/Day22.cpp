class Solution {
public:
    string vectorToInteger(vector<int>& vec) {
        string result="", flip="";
        for (int num : vec) {
            if(num==0) {result+= '0'; 
            flip += '1';
            }
            else {
                result+='1';
                flip+='0';  
            } 
        }
        return min(flip,result);
    }
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> umap;
        for(auto vec: matrix){
            string str = vectorToInteger(vec);
            umap[str]++;
        }
        int maxi = 0;
        for(const auto& pair: umap){
            if(pair.second>maxi) maxi = pair.second;
        }
        return maxi;
    }
};
