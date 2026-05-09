class Solution {
public:

    void backtrack(vector<vector<int>>& result, vector<int> curr, vector<int>& nums, int target){
        if(target == 0) {
            sort(curr.begin(), curr.end());
            result.emplace_back(curr); 
            return;
        }
        if(target < 0) return;

        for(int i = 0; i < nums.size(); i++){
            vector<int> temp = curr;
            int curNum = nums[i];
            temp.emplace_back(curNum);
            backtrack(result, temp, nums, target - curNum);
        }

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> in;
        backtrack(in, {}, nums, target);
        set<vector<int>> res;
        for(const auto& v : in){
            res.emplace(v);
        }

        return vector(res.begin(), res.end());
    }
};

// 