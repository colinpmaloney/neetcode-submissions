class Solution {
public:

    void algo(vector<int>&nums, vector<vector<int>>& result, vector<int> current, int i){
        if(i == nums.size()){
            result.emplace_back(current);
            return;
        }

        current.emplace_back(nums[i]);
        algo(nums,result, current, i+1);
        current.pop_back();

        while(i + 1 < nums.size() && nums[i] == nums[i+1]){
            i++;
        }
        algo(nums,result, current, i+1);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        algo(nums, result, {}, 0);
        return result;
    }
};
