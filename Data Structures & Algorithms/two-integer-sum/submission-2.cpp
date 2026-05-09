class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mapOne;
        for(int x = 0; x < nums.size(); x ++)
        {
            int complement = target - nums[x];
            auto it = mapOne.find(complement);
            if(it != mapOne.end()){
                return {mapOne[complement], x};
            }

            mapOne[nums[x]] = x;
        }
    }
};
