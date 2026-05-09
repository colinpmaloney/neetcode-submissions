class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create map for each string and store in vector for all maps
        vector<map<char, int>> vM;
        int i = 0;
        for(auto s : strs){
            vM.push_back(map<char, int>());
            // Track occurence count of each character
            for(auto c : s){
                vM[i][c]++;
            }
            i++;
        }

        // Create vector of vectors of strings to return
        vector<vector<string>> retMe;

        map<map<char, int>, vector<string>> mVS;
        // For each map in vM
        i = 0;
        for(auto m : vM){
            mVS[m].push_back(strs[i++]);
        }

        for(const auto& pair : mVS){
            retMe.push_back(pair.second);
        }

        return retMe;
    }
};
