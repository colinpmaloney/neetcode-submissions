class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        for(int x = s.length() - 1; x >= 0; x--){
            if(s[x] == ' ' && length == 0) continue;
            if(s[x] == ' ' && length > 0) return length;
            length++;
        }

        return length;
    }
};