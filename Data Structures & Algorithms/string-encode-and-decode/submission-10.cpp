class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(const auto& s : strs){
            res += to_string(s.length()) + "#" + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> result;

        // Start at the beginning
        int i = 0;
        // Go to the end
        while(i < s.length()){
            // J = the distance to the #
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            // Take from i to j, end of word to the hash and get the substring as a number
            int length = stoi(s.substr(i, j - i));
            // Make I equal to the position after the hash AKA Start of next word
            i = j + 1;
            // J is equal to the start + the length which takes you to the first character after the word.
            j = length + i;
            // Take the substring from the start of the word + the length - aka the whole word
            result.emplace_back(s.substr(i, length));
            // Set i = j and repeat
            i = j;
        }
        return result;
    }
};
