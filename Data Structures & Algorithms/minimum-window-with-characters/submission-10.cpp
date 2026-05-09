class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length()) return "";

        vector<int> sCharacterCount(58,  0);
        vector<int> tCharacterCount(58 , 0);
        string smallestString = s + "end";
        string currentString = "";

        for(int x = 0; x < t.length(); x++){
            int sIndex = s[x] - 'A';
            int tIndex = t[x] - 'A';
            sCharacterCount[sIndex]++;
            tCharacterCount[tIndex]++;
            currentString += s[x];
        }

        int matches = 0;
        for(int x = 0; x < 58; x++){
            if(sCharacterCount[x] >= tCharacterCount[x]) matches++;
        }
        if (matches == 58) return s.substr(0,t.length());
        
        int left = 0;
        for(int x = t.length(); x < s.length(); x++){

            char currentStringLetter = s[x];
            currentString += currentStringLetter;

            int currentStringLetterIndex = currentStringLetter - 'A';
            sCharacterCount[currentStringLetterIndex]++;

            if(sCharacterCount[currentStringLetterIndex] == tCharacterCount[currentStringLetterIndex]){
                matches++;
            }  

            while(matches == 58){
                if(currentString.length() < smallestString.length()){
                    smallestString = currentString;
                }else{
                    int leavingIndex = s[left] - 'A';
                    sCharacterCount[leavingIndex]--;
                    left++;

                    if(sCharacterCount[leavingIndex] == tCharacterCount[leavingIndex] - 1)
                        matches--;

                    currentString = currentString.substr(1);
                }
            }

        }
        
        if(smallestString == s + "end") return "";
        return smallestString;
    }
};
