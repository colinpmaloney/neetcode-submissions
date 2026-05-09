class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        if(s.length() != t.length()) return false;

        // Initialize
        for(auto x : s){
            m[x] = 0;
        }
        // Increment
        for(auto x : s){
            m[x]++;
        }
        // Decrement
        for(auto x : t){
            m[x]--;
        }

        // Check for all 0
        for(auto x : s){
            if(m[x] != 0) return false;
        }

        return true;
    }
};
