class Solution {
public:

    void algo(vector<int>& nums, vector<int> current, vector<vector<int>>& res, int i, int curNum, int target){
        if(curNum == target){
            res.emplace_back(current);
            return;
        }

        if(curNum > target){
            return;
        }

        for(int x = i; x < nums.size(); x++){
            curNum += nums[x];
            current.emplace_back(nums[x]);
            algo(nums, current, res, x, curNum, target);
            curNum -= nums[x];
            current.pop_back();
        }

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        algo(nums, {}, res, 0, 0, target);

        return res;
    }
};
