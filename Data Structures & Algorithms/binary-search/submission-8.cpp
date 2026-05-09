class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int index;
        while(l <= r ){
            int index = (l+r) / 2;
            if(nums[index] == target) return index;
            if(nums[index] > target)
                r = index - 1;
            else
                l = index + 1;
        }    

        return -1;
    }
};
