// Day13
// 2037. Minimum Number of Moves to Seat Everyone

// solution

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans = 0;
        for(int i=0;i<seats.size();i++){
            ans += abs(seats[i] - students[i]);
        }
        return ans;
    }
};
