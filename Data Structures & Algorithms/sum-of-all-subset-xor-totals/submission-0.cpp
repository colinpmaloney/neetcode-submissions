class Solution {
public:

    void bt(vector<int>& result, vector<int> curr, vector<int>& nums, int i){
        if(i == nums.size()) return;

        for(; i < nums.size(); i++){
            int xorValue = 0;
            curr.emplace_back(nums[i]);
            for(int x = 0; x < curr.size(); x++){
                xorValue ^= curr[x];
            }
            result.emplace_back(xorValue);
            bt(result, curr, nums, i+1);
            curr.pop_back();
        }
    }

    int subsetXORSum(vector<int>& nums) {
        vector<int> resVec = {};
        bt(resVec, {}, nums, 0);

        return accumulate(resVec.begin(), resVec.end(), 0);
    }
};