class Solution {
public:
    bool parsed = false;

    string cleanString(string s){
        string newS = "";
        for(int x = 0; x < s.length(); x++)
        {
            if(isalnum(s[x]))
                newS += tolower(s[x]);
        }
        parsed = true;
        return newS;
    }

    bool isPalindrome(string s) {
        if(!parsed) 
            s = cleanString(s);
        if(s.length() <= 1) return true;
        if(s[0] == s[s.length()-1])
            return isPalindrome(s.substr(1,s.length()-2));

        return false;
        
    }
};
