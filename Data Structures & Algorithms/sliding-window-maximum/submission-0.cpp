class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        vector<int> window;
        for(int x = 0; x < nums.size(); x++){
            window.emplace_back(nums[x]);
            if(x >= k - 1){
                int max = *max_element(window.begin(), window.end());
                result.emplace_back(max);
                window.erase(window.begin());
            }
        }

        return result;
    }
};
