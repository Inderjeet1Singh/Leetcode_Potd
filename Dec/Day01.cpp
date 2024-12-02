class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>mp;
        for(auto e : arr){
            mp[e]++;
        }
        for(auto e : arr){
            if(mp[2*e]>0){
                if(e==0){
                    if(mp[e]>1) return true;
                    else continue;
                }
                else return true;
            }
        }
        return false;
    }
};
