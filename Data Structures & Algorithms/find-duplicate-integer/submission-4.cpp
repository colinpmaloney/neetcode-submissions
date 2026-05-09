class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        for(int x = 0; x < nums.size(); x++){
            if(nums[abs(nums[x]) - 1] < 0) 
                return abs(nums[x]);
            nums[abs(nums[x]) - 1] *= -1;
        }
        return -1;
    }
};

        
