class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> resultSet;
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());        
        for(int x = 0; x < nums.size() - 2; x++){
            int l = x+1;
            int r = nums.size() - 1;
            int sum = nums[x] + nums[l] + nums[r];

            // We will need a break condition if
            while(l < r){
                if(sum == 0){
                    vector<int> place = {nums[x], nums[l], nums[r]};
                    resultSet.emplace(place);
                }
                if(sum > 0)
                    r--;
                else
                    l++;
                sum = nums[x] + nums[l] + nums[r];
            }
        }

        for(const auto& s : resultSet) result.emplace_back(s);

        return result;
    }
};
