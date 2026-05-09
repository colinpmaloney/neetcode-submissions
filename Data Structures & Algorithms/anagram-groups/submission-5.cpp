class Solution {
public:

    string hashMe(string str){
        string hash = "";

        // Get Frequencies
        vector<int> strFreq(26, 0);
        for(const auto& c : str){
            strFreq[c-'a']++;
        }
        // Map frequencies to a key
        for(int x = 0; x < 26; x++){
            hash += to_string(strFreq[x]) + '-';
        }

        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > mapToVec;

        for(const auto& s : strs){
            string hash = hashMe(s);
            mapToVec[hash].emplace_back(s);
        }

        vector<vector<string>> res;
        for(const auto& p : mapToVec){
            res.emplace_back(p.second);
        }

        return res;
    }
};
