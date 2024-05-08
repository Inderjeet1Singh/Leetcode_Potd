// Day8 08-05-24
//Question Number --> 506 Relative Ranks
//Link --> https://leetcode.com/problems/relative-ranks/description/?envType=daily-question&envId=2024-05-08

//Solution

class Solution {
public:
int findIndexForValue(map<int, int>&valueIndexMap, int value) {
    for (auto pair : valueIndexMap) {
        if (pair.first == value) {
            return pair.second;
        }
    }
    return -1;
}
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int>mp;
        int n = score.size();
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            mp[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        int count = 1;
        for(int i=0;i<n;i++){
            int index = findIndexForValue(mp,score[i]);
            if(count==1){
                ans[index]="Gold Medal";
                count++;
            } else if(count==2){
                ans[index]="Silver Medal";
                count++;
            } else if(count==3){
                ans[index]="Bronze Medal";
                count++;
            } else {
                ans[index]=to_string(count);
                // cout<<to_string(count)<<" ";
                count++;
            }
            // cout<<count<<" ";
        }

        return ans;
    }
};
