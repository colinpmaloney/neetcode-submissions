class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = 0;
        while(x < nums.size())
        {
            if(nums[x] != x) return x;
            x++;
        }

        return x;
    }
};
