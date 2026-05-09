class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int longest = 0;
        set<char> st;

        for(int r = 0; r < s.length(); r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.emplace(s[r]);
            longest = max(longest, (r-l) + 1);
        }

        return longest;
    }
};
