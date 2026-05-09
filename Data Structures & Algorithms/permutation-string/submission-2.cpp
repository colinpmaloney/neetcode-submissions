#include <array>
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        array<int, 26> freq = {0};

        for(const auto & c : s1){
            freq[c - 'a']++;
        }

        string current = "";
        for(int x = 0; x < s2.length(); x++){
            current += s2[x];
            if(current.length() > k){
                freq[current[0] - 'a']++;
                current.erase(0,1);
            }
            freq[s2[x] - 'a']--;
            if(freq == array<int, 26>({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})) return true;
        }

        return false;
    }
};
