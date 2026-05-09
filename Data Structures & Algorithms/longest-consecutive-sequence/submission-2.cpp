class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> numSet;
        for(const auto& n : nums){
            numSet.emplace(n);
        }

        for(int x = 0; x < nums.size(); x++){
            int current = nums[x];
            if(numSet.count(current - 1)) continue;
            int curValue = 0;
            while(numSet.count(current)){
                current++;
                curValue++;
                res = max(res, curValue);
            }
        }

        return res;
    }
};
