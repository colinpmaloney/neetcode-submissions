class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        // Empty map
        for(int x = 0; x < nums.size(); x++){
            // Go through each number and find compliment
            int comp = target - nums[x];
            // Check if the compliment is already in the map
            auto it = map.find(comp);
            // If it is in the map return the 
            if(it != map.end()){
                return {map[comp], x};
            }

            map[nums[x]] = x;
        }
    }
};
