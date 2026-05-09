class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        int k = s1.length();
        int s1Freq[26] = {0};
        int s2Freq[26] = {0};

        for(int x = 0; x < k; x++){
            s1Freq[s1[x] - 'a']++;
            s2Freq[s2[x] - 'a']++;
        }

        int matches = 0;
        for(int x = 0; x < 26; x++){
            if(s1Freq[x] == s2Freq[x]){
                matches++;
            }
        }

        for(int x = k; x < s2.length(); x++){
            if(matches == 26) return true;
            int leavingIndex = s2[x-k] - 'a';
            int currentIndex = s2[x] - 'a';
            
            if(s2Freq[leavingIndex] == s1Freq[leavingIndex])
                matches--;
            s2Freq[leavingIndex]--;
            if(s2Freq[leavingIndex] == s1Freq[leavingIndex])
                matches++;

            if(s2Freq[currentIndex] == s1Freq[currentIndex])
                matches--;
            s2Freq[currentIndex]++;
            if(s2Freq[currentIndex] == s1Freq[currentIndex])
                matches++;
        }

            

        return matches == 26;
    }
};
