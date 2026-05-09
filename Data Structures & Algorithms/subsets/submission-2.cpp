class Solution {
public:

    void dfs(vector<int>& nums, vector<int> current, vector<vector<int>>& v, int i){
        if(i >= nums.size()){
            v.emplace_back(current);
            return;
        } 

        current.emplace_back(nums[i]);
        dfs(nums, current, v, i+1);
        current.pop_back();
        dfs(nums, current, v, i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        dfs(nums, {}, v, 0);
        return v;
    }
};