class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int findPosIndex = nums.size();
        for(int n = 0; n < nums.size(); n++){
            if(nums[n] >= 0){
                findPosIndex = n;
                break;
            }
        }
        vector<int> result;

        int behind = findPosIndex - 1;
        for(int x = 0; x < nums.size(); x++){
            int addMe;
            if(findPosIndex >= nums.size() || (behind >= 0 && nums[behind] > -nums[findPosIndex])){
                addMe = nums[behind] * nums[behind--];
                result.emplace_back(addMe);
            }
            else
            {
                addMe = nums[findPosIndex] * nums[findPosIndex++];
                result.emplace_back(addMe);
            }
        }
        return result;
    }
};