class Solution {
public:
    int longestMountain(vector<int>& arr) {
       int n = arr.size();
        int up = 0, down = 0;
        int maxLen = 0;

        for (int i = 1; i < n; i++) {
            // Reset if flat or start of a new mountain
            if ((down > 0 && arr[i] > arr[i - 1]) || arr[i] == arr[i - 1]) {
                up = down = 0;
            }

            if (arr[i] > arr[i - 1]) {
                up++;
            } 
            else if (arr[i] < arr[i - 1]) {
                down++;
            }

            // Valid mountain condition
            if (up > 0 && down > 0) {
                maxLen = max(maxLen, up + down + 1);
            }
        }

        return maxLen; 
    }
};