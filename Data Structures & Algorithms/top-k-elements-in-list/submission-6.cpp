#include <array>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> elementFreq;
        int maxSize = 0;
        for(const auto& n : nums){
            maxSize = max(maxSize, ++elementFreq[n]);
        }

        vector<vector<int>> freq(maxSize + 1);
        for(const auto& e : elementFreq){
            freq[e.second].emplace_back(e.first);
        }

        vector<int> result;
        int size = 0;
        for(int x = maxSize; x >= 0; x--){
            for(const auto& a : freq[x]){
                result.emplace_back(a);
                if(++size == k)
                    return result;
            }
        }

        return result;
        
    }
};
