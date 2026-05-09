#include <array>
class Solution {
public:
    bool isAnagram(string s, string t) {
        array<int, 26> sV = {0};
        array<int, 26> tV = {0};

        for(const auto& c : s){
            sV[c - 'a']++;
        }

        for(const auto& c : t){
            tV[c - 'a']++;
        }

        return sV == tV;

    }
};
