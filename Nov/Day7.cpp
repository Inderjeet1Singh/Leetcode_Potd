class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;
        for(int i=0;i<32;i++){ 
            int numberOfSetBitsAtithPlace = 0;
            for(auto e:candidates){
                numberOfSetBitsAtithPlace += (e>>i) & 1;
            }
            ans = max(ans,numberOfSetBitsAtithPlace);
        }
        return ans;
    }
};

// Explaination
// Calculate the set Bit for every Place i.e for 0th, 1st,2nd.... soon . and return the answer in which the maximum numbers have setBit at ith place 
// for example 
// start position from end of number i.e 3rd2nd1st0th (position of setBits in Number)
// for 5 = 0101, 7 = 0111 , 10 = 1010, 2 = 0010, 1 = 0001
// In 0th place 3 numbers have setBit i.e 5,7,1
// in 1st place 3 numbers have setBit i.e 7,10,2
// in 2nd place 2 number have setBit i.e 5,7
// in 3rd place 1 number have setBit i.e 10
// the Three number have setbit so when we do end of these number the answer shoud be Greater then 1 and have maximun nuber is 3 so 3 is answer 
