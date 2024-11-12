class Solution {
public:
int findJustSmallerOrEqual(vector<vector<int>>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid][0] <= target) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        for(int i=1;i<items.size();i++){
                items[i][1] = max(items[i][1],items[i-1][1]);
        }
        int ele = 0;
        for(int i=0;i<queries.size();i++){
            ele = findJustSmallerOrEqual(items,queries[i]);
            if(ele==-1) queries[i] = 0;
            else queries[i] = items[ele][1] ;
        }   
    return queries;
    }
};
