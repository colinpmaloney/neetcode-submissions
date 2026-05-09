#include <array>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashToVec;
        for(const auto& s : strs){
            std::array<int, 26> charFreq = {0};
            for(const auto & c : s)
                charFreq[c-'a']++;
            
            string hash = "";
            for(int x = 0; x < 26; x++){
                hash += to_string(charFreq[x]) + '-';
            }
            hashToVec[hash].emplace_back(s);
        }

        vector<vector<string>> result;
        for(const auto& x : hashToVec){
            result.emplace_back(x.second);
        }
        return result;
    }
};
