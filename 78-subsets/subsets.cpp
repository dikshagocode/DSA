class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(0, nums, temp, result);
        return result;
    }

private:
    void backtrack(int index, vector<int>& nums, vector<int>& temp,
                   vector<vector<int>>& result) {
        // every state is a subset
        result.push_back(temp);

        for (int i = index; i < nums.size(); i++) {
            temp.push_back(nums[i]);          // choose
            backtrack(i + 1, nums, temp, result); // explore
            temp.pop_back();                  // unchoose
        }
    }
};
