class Solution {
public:

    void dfs(vector<int>& nums, vector<int> current, vector<vector<int>>& v, int i){
        v.emplace_back(current);
        if(i >= nums.size()) return;
        for(; i < nums.size(); i++){
            current.emplace_back(nums[i]);
            dfs(nums, current, v, i+1);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        dfs(nums, {}, v, 0);
        return v;
    }
};