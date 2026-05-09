class Solution {
public:

    void backtrack(vector<vector<int>>& result, vector<int> curr, vector<int>& nums, int i, int target){
        if(target == 0) {
            result.emplace_back(curr); 
            return;
        }
        if(target < 0 || i >= nums.size()) return;

        int curNum = nums[i];
        curr.emplace_back(curNum);
        backtrack(result, curr, nums, i, target - curNum);
        curr.pop_back();
        backtrack(result, curr, nums, i + 1, target);

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        backtrack(res, {}, nums, 0, target);
        return res;
    }
};

// 