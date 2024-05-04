// 04-05-24 Day4 
// Question number 881 Boats to Save People
// Link https://leetcode.com/problems/boats-to-save-people/?envType=daily-question&envId=2024-05-04

//Solution
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i =0,j=people.size()-1;
        int count = 0;
        while(i<=j){
            if(i==j){
                count++;i++;j--;
            }
           else if(people[j]>=limit){
                 count++; j--;
                 }
            else if(people[i]+people[j]<=limit) {
                count++; j--;i++;
        }
        else if(people[i]+people[j]>limit) {
            count++; j--;
        }
       
    }
    return count;
    }

};
