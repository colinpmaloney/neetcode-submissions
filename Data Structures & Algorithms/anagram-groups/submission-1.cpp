class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hm;
        vector<vector<string>> retMe;
        for(const auto& str : strs)
        {
           string sorted = str;
           sort(sorted.begin(), sorted.end());
           hm[sorted].emplace_back(str); 
        }

        for(const auto& [key, value] : hm){
            retMe.emplace_back(value);
        }

        return retMe;
    }
};
