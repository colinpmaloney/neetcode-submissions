#include <array>
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        array<int, 26> freq = {0};

        for(const auto & c : s1){
            freq[c - 'a']++;
        }

        for(int x = 0; x < s2.length(); x++){
            if(x >= k){
                freq[s2[x-k] - 'a']++;
            }
            freq[s2[x] - 'a']--;
            if(freq == array<int, 26>({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})) return true;
        }

        return false;
    }
};
