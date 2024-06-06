//Day6
// 846. Hand of Straights

//Solution

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        int k = groupSize;
        if(n%k!=0) return false;
        sort(hand.begin(),hand.end());
    // for(auto e : hand) cout<<e<<",";
        int st =0,ed = 1;
        int count = 0, m =-1;
        int flag = 0;
        while(st<hand.size() && ed<hand.size()){
            if(hand[ed]==-1) ed++;
           else if(count==k-1) {
            count = 0;
            hand[st]=-1;
                if(m!=-1){
                    st = m;
                    ed = st+1;
                    m =-1;
                    flag = 0;
                }
                else {
                    st = ed;
                    ed++;
                }
            }
          else if(hand[ed]==hand[ed-1]){
                if(flag==0){
                    m = ed;
                    flag = 1;
                }
                ed++;
            }
            else if(hand[ed]-hand[st]!=1) return false;
            else if(hand[ed]-hand[st]==1){
                hand[st]=-1;
                st = ed;
                count++;
                ed++;
            } 
        }
        for(int i=0;i<n-1;i++) if(hand[i]!=-1) return false;
        return true;
    }
};
