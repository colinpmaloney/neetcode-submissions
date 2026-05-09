class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int index = -1;

        while(l <= r){
            index = (l+r) / 2;
            // If we found the target - return
            if(nums[index] == target) return index;
            // If we over shot
            if(nums[index] > target)
                r = index - 1;
            // If we under shot
            else if(nums[index] < target)
                l = index + 1;
        }

        return -1;
    }
};
