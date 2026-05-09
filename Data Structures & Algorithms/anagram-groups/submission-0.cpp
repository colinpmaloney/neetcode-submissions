class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> retMe;
        unordered_map<string, vector<string>> hm;

        for(const string& str : strs){
            string sortStr = str;
            sort(sortStr.begin(), sortStr.end());
            hm[sortStr].emplace_back(str);
        }

        int index = 0;
        for(const pair<string, vector<string>>& n : hm)
        {
            retMe.emplace_back(n.second);
        }

        return retMe;
    }
};

// Create a hashmap<string, vector<int>>
// For each word
//      Use the sorted word as a key
//      append the current index to the vector<int>

// For each

