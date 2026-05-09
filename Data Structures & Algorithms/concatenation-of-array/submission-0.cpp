class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums.size() * 2);
        for(int x = 0; x < nums.size() * 2; x++){
            result[x] = nums[x%nums.size()];
        }
        return result;
    }
};