class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto zeroCount = count(nums.begin(), nums.end(), 0);
        if(nums.size() == zeroCount) return; 

        for(int x = 0; x < nums.size() - 1; x++){
            if(nums[x] == 0){
                for(int j = x + 1; j < nums.size(); j++){
                    if(nums[j] != 0){
                        nums[x] = nums[j];
                        nums[j] = 0;
                        break;
                    }
                }
            }
        }
    }
};