class Solution {
public:
    bool recursion(string s){
        if(s.length() <= 1) return true;
        if(s[0] == s[s.length() - 1])
            return recursion(s.substr(1,s.length() -2 ));
        
        return false;
    }

    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while(l < r){
            if(s[l] != s[r]){
                return recursion(s.substr(l+1, r-l)) || recursion(s.substr(l, r-l));
            }
            l++;
            r--;
        }

        return true;
    }
};