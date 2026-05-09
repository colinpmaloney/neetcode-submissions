class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> resultSet;

        for(int x = 0; x < nums.size() - 2; x++){
            int l = x + 1;
            int r = nums.size() - 1;

            int sum;
            while(l<r){
                sum = nums[x] + nums[l] + nums[r];
                cout << x << ' ' << l << ' ' << r << '\n';
                if(sum == 0)
                {
                    resultSet.emplace(vector{nums[x], nums[l], nums[r]});
                }
                if(sum > 0)
                    r--;
                else
                    l++;
            }

        }

        vector<vector<int>> result = vector(resultSet.begin(), resultSet.end());
        return result;
    }
};
