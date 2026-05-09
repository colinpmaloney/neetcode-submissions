class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> setNums(nums.begin(), nums.end());
        return setNums.size() != nums.size();
    }
};
