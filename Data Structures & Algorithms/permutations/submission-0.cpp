class Solution {
public:

    void algo(vector<int>& nums, vector<vector<int>>& res, vector<int> current){
        if(current.size() == nums.size()){
            res.emplace_back(current);
            return;
        }

        for(int x = 0; x < nums.size(); x++){
            if(find(current.begin(), current.end(), nums[x]) != current.end()) continue; 
            current.emplace_back(nums[x]);
            algo(nums, res, current);
            current.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        algo(nums, res, {});

        return res;
    }
};
