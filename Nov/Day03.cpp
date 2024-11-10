class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()!=goal.size()) return false;
       s = s+s;
       if(s.find(goal)>= s.size() || s.find(goal)<0) return false;
       return true;
    }
};
