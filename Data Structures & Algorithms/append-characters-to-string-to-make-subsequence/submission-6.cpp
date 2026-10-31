class Solution {
public:
    int appendCharacters(string s, string t) {
        int l = 0;
        int r = 0;
        int len_s = s.length();
        int len_t = t.length();

        while (l <= len_s){
            if (r >= len_t) 
                return 0;
            if(s[l] == t[r])
                r += 1;
            l+= 1;
        }

        return len_t - r;
    }
};