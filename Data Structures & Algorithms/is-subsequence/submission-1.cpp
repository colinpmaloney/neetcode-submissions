class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sPointer = 0;
        for(int x = 0; x < t.length(); x++){
            if(t[x] == s[sPointer]) sPointer++;
            if(sPointer == s.length()) return true;
        }

        return false;
    }
};