class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int index;
        
        while(l < r){
            index =  (l+r) / 2;
            if(nums[index] == target)
                return index;
            else if(nums[index] > target)
                r = index;
            else if (nums[index] < target){
                if(index == l)
                    l++;
                else
                    l = index;
            }
        }

        index =  (l+r) / 2;
        if(nums[index] == target)
                return index;
            

        return -1;
    }
};
