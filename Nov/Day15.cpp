class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& array) {
        int size = array.size(), start = 0, end = size - 1;
        while (start + 1 < size && array[start] <= array[start + 1]) {
            ++start;
        }
        if (start == array.size() - 1) {
            return 0;
        }
        while (end > start && array[end - 1] <= array[end]) {
            --end;
        }
        int result = min(size - start - 1, end);
        int leftIndex = 0, rightIndex = end;
        while (leftIndex <= start && rightIndex < size) {
            if (array[rightIndex] >= array[leftIndex]) {
                result = min(result, rightIndex - leftIndex - 1);
                ++leftIndex;
            } else {
                ++rightIndex;
            }
        }
        return result;
    }
};
