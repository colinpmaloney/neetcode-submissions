class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        for(auto s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            um[sorted].emplace_back(s);
        }

        vector<vector<string>> retMe;
        for(const auto& pair : um){
            retMe.emplace_back(pair.second);
        }

        return retMe;
    }
};
