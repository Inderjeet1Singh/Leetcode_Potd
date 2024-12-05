class Solution {
public:
    bool canChange(string start, string target) {
        vector<pair<char,int>>vec;
        int n = target.size(),j=-1;
        for(int i=0;i<n;i++)
        if(target[i]!='_')
        vec.push_back(make_pair(target[i],i));
        for(int i=0;i<n;i++)
        if(((start[i]=='L') && ((j++ || 1) && (j==vec.size() || vec[j].first!='L' || vec[j].second>i))) || ((start[i]=='R') && ((j++ || 1) && (j==vec.size() || vec[j].first!='R' || vec[j].second<i))))
        return false;
        return j==vec.size()-1;
    }
};
