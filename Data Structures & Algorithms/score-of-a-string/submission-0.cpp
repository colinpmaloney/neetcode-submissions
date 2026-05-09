class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        for(int x = 0; x < s.length() -1; x++){
            int a = s[x];
            int b = s[x+1];
            int c = abs(a - b);
            result += c;
        }

        return result;
    }
};