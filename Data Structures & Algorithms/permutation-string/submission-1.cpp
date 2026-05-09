#include <array>
class Solution {
public:

    void p(array<int, 26> a){
        for (const auto & p : a ) cout << p;
        cout << '\n';
    }
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        array<int, 26> s1Freq = {0};
        array<int, 26> s2Freq = {0};

        for(const auto & c : s1){
            s1Freq[c - 'a']++;
        }

        string current = "";
        for(int x = 0; x < s2.length(); x++){
            current += s2[x];
            if(current.length() > k){
                s2Freq[current[0] - 'a']--;
                current.erase(0,1);
            }
            s2Freq[s2[x] - 'a']++;
            cout << current << "\n";
            p(s1Freq);
            p(s2Freq);
            if(s1Freq == s2Freq) return true;
        }

        return false;
    }
};
