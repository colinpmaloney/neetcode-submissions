class Solution {
public:

    void dfs(vector<int>& nums, vector<int> current, set<vector<int>>& st, int i){
        st.emplace(current);
        if(i >= nums.size()) return;
        for(; i < nums.size(); i++){
            current.emplace_back(nums[i]);
            dfs(nums, current, st, i+1);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> st;
        dfs(nums, {}, st, 0);
        return vector(st.begin(), st.end());
    }
};