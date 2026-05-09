class Solution {
public:

    string spacer = "qj";
    string encode(vector<string>& strs) {
        string result = "";
        for(const auto& s : strs){
            result += s + spacer;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        while(s.length() > 0){
            auto loc = s.find(spacer);
            string chunk = s.substr(0,loc);
            result.emplace_back(chunk);
            s = s.substr(loc + spacer.length());
        }

        return result;
    }
};
