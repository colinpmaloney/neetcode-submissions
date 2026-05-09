class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size() - 1;

        int index;
        while( l <= r && l != index){
            index = (l+r) / 2;
            if(nums[r] < nums[index])
                l = index + 1;
            else
                r = index;
        }

        return nums[index];
    }
};
