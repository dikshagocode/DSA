class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> curr;
        backtrack(1, n, k, curr, result);
        return result;
    }

private:
    void backtrack(int start, int n, int k, vector<int>& curr,
                   vector<vector<int>>& result) {
        // if we picked k numbers
        if (curr.size() == k) {
            result.push_back(curr);
            return;
        }

        for (int i = start; i <= n; i++) {
            curr.push_back(i);
            backtrack(i + 1, n, k, curr, result);
            curr.pop_back();
        }
    }
};
