class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int one = 0;
        int two = 0;

        while(one < word1.length() && two < word2.length()){
            result += word1[one++];
            result += word2[two++];
        }

        if(one == word1.length() && two != word2.length()){
            for(int x = word1.length(); x < word2.length(); x++){
                result += word2[x];
            }
        }else{
            for(int x = word2.length(); x < word1.length(); x++){
                result += word1[x];
            }
        }
        return result;
    }
};