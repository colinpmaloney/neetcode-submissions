class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int outputIndex = r;
        
        vector<int> result(nums.size());
        while(l <= r){
            if(abs(nums[l]) < abs(nums[r]))
                result[outputIndex] = nums[r] * nums[r--];
            else
                result[outputIndex] = nums[l] * nums[l++];

            outputIndex--;
        }
        return result;
    }
};