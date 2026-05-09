class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> count(nums.size());
        vector<int> retMe;
        unordered_map<int, int> hm;
        for(const auto& num : nums)
            hm[num]++;
        
        for(const auto& [key, value] : hm)
            count[value-1].emplace_back(key);


        for(int x = count.size()-1; x >= 0; x--){
            for(const auto& x : count[x]){
                if(retMe.size() >= k)
                    break;
                retMe.emplace_back(x);
            }
            if(retMe.size() >= k)
                    break;
        }

        return retMe;
    }
};
