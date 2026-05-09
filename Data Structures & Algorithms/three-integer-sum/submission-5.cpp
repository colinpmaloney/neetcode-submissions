class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> retMe;
        for(int x = 0; x < nums.size(); x++){
            if( x > 0 && (nums[x-1] == nums[x]))
                continue;
            int l = x+1;
            int r = nums.size() - 1;

            while(l < r){
                int sum = nums[l] + nums[r] + nums[x];
                if(sum == 0){
                    retMe.push_back({nums[x], nums[l], nums[r]});
                    l++;
                    while(nums[l] == nums[l-1] && l < r)
                        l++;
                }
                else if(sum > 0)
                    r--;
                else
                    l++;
            }
        }

        return retMe;
    }
};
