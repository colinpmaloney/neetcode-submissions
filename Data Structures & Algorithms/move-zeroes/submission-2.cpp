class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        int r = 0;
        for(; r < nums.size(); r++){
            if(nums[r])
                swap(nums[l++], nums[r]);
        }
    }
};