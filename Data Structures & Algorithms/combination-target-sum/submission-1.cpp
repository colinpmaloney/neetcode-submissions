class Solution {
public:

    void backtrack(vector<vector<int>>& result, vector<int> curr, vector<int>& nums, int target){
        if(target == 0) {
            result.emplace_back(curr); 
            return;
        }
        if(target < 0) return;

        for(int i = 0; i < nums.size(); i++){
            int curNum = nums[i];
            if(curr.size() && curNum < curr.back()) continue;
            vector<int> temp = curr;
            temp.emplace_back(curNum);
            backtrack(result, temp, nums, target - curNum);
        }

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        backtrack(res, {}, nums, target);
        return res;
    }
};

// 