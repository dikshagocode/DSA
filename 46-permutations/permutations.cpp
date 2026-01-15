class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(0, nums, result);
        return result;
    }

    void backtrack(int index, vector<int>& nums, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            backtrack(index + 1, nums, result);
            swap(nums[index], nums[i]); // undo
        }
    }
};
