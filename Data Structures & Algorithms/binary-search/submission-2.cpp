class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            int mid = l + (r-l) / 2;
            if(nums[mid] == target)
                return mid;
            // If to big reign in
            else if(nums[mid] > target){
                r = mid - 1;
            }
            // If to small size up
            else{
                l = mid + 1;
            }
        }

        return -1;
    }
};
