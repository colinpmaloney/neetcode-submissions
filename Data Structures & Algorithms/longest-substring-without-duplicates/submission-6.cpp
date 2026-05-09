class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() <= 1) return s.length();
        if(s.length() == 2){
            return (s[0] == s[1] ? 1 : 2);
        }

        int l = 0;
        int r = 1;
        int longest = 0;

        string temp = "";
        // While in bounds
        while(r <= s.length()){
            temp = "";
            for(int x = l; x < r; x++){
                // If new character add it and move on
                if(temp.find(s[x]) == string::npos)
                {
                    temp += s[x];
                    r++;
                    if(r > s.length()) break;
                }
                // If the character already is in then increment r and restart
                else
                {
                    l++;
                    r = l+1;
                    break;
                }
            }
            if(temp.length() > longest) longest = temp.length();
        }

        return longest;

    }
};
