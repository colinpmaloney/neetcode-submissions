class Solution {
public:
    vector<string> combos = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void algo(vector<string>& res, string current, string digits, int i){
        if(current.length() == digits.length()){
            res.emplace_back(current);
            return;
        }

        if(i > digits.length()) return;

        int number = digits[i] - '0';
        int index = number - 1;

        for(int x = 0; x < combos[index].length(); x++){
            current += combos[index][x];
            algo(res, current, digits, i + 1);
            current = current.substr(0, current.length() - 1);
        }

     
    }

    vector<string> letterCombinations(string digits) {
        if(digits == "") return {};
        vector<string> res;
        algo(res, "", digits, 0);

        return res;
    }
};
