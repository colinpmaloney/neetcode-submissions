class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> checker(nums.begin(), nums.end());
        int res = 0;

        for(int x = 0; x < nums.size(); x++){
            int index = 1;
            int seqLen = 0;
            // If it is the beginning of a sequence
            if(checker.find(nums[x]-1) == checker.end()){
                seqLen++;
                while(index < nums.size() && checker.find(nums[x] + index++) != checker.end())
                    seqLen++;
                res = max(res, seqLen);
            }
        }

        return res;
    }
};
