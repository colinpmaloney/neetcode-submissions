class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            if(r > l && nums[r] <= nums[l]){
                if(nums[r] == target) return r;
                r--;
            }
            else
            {
                int k = (l+r)/2;
                if(nums[k] == target) return k;
                else if(nums[k] < target)
                    l = k + 1;
                else
                    r = k - 1;
            }
        }

        return -1;
    }
};
