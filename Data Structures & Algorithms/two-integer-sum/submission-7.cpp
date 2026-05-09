class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int x = 0; x < nums.size(); x++){
            // Diff is what we need to complement the current value
            int diff = target-nums[x];
            // If the compliment diff is in the map
            if(m.find(diff) != m.end()){
                return {m[diff], x};
            }
            // Set Map Key to the Value which points to the index
            m[nums[x]] = x;
        }
    }
};
