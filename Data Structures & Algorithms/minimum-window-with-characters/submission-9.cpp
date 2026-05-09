class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length()) return "";
        vector<int> sM(58,  0);
        vector<int> tM(58 , 0);
        int matches = 0;
        string smallest = s + "end";
        string current = "";

        for(int x = 0; x < t.length(); x++){
            int sIndex = s[x] - 'A';
            int tIndex = t[x] - 'A';
            sM[sIndex]++;
            tM[tIndex]++;
            current += s[x];
        }

        for(int x = 0; x < 58; x++){
            if(sM[x] >= tM[x]) matches++;
        }



        if (matches == 58) return s.substr(0,t.length());
        
        int left = 0;
        for(int x = t.length(); x < s.length(); x++){

            char currentLetter = s[x];
            current += currentLetter;

            int currentLetterIndex = currentLetter - 'A';
            sM[currentLetterIndex]++;

            if(sM[currentLetterIndex] == tM[currentLetterIndex]){
                matches++;
            }  

            while(matches == 58){
                if(current.length() < smallest.length()){
                    smallest = current;
                }else{
                    int leavingIndex = s[left] - 'A';
                    sM[leavingIndex]--;
                    left++;

                    if(sM[leavingIndex] == tM[leavingIndex] - 1)
                        matches--;

                    current = current.substr(1);
                }
            }

        }
        
        if(smallest == s + "end") return "";
        return smallest;
    }
};
