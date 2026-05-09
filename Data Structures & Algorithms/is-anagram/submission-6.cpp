class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> chFreq;
        for(const auto& c : s){
            chFreq[c]++;
            if(chFreq[c]==0)
                chFreq.erase(c);
        }

        for(const auto& c : t){
            chFreq[c]--;
            if(chFreq[c]==0)
                chFreq.erase(c);
        }

        return chFreq.empty();

    }
};
