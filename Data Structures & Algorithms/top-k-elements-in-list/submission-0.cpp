class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        vector<int> retMe;

        for(const auto& num : nums)
            hm[num]++;

        map<int, vector<int>, greater<int>> ohm;
        for(const auto& [key, value] : hm){
            ohm[value].emplace_back(key);
        }

        for(const auto& [key, vec] : ohm)
        {
            for(const auto& val : vec)
            {
                retMe.emplace_back(val);
                if(retMe.size() >= k)
                    break;
            }
            if(retMe.size() >= k)
                    break;

        }

        return retMe;
    }
};

// Hash each number to its occurences
// Hash occurences to the numbers
// Go down from most occurences to least, and add the numbers