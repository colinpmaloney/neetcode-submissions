class Solution {
public:
    bool isAnagram(string s, string t) {
        int sLength = s.length();
        if(sLength != t.length()) return false;

        map<char, int> sMap;    
        map<char, int> tMap;
        for(int x = 0; x < sLength; x++)
        {
            sMap[s[x]]++;
            tMap[t[x]]++;
        }
        
        return sMap == tMap;

    }
};
