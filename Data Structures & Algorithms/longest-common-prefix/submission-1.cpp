class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        int len = 0;
        bool out = false;
        while (1){
            for(int i = 0; i < strs.size() - 1; i++){
                if(len >= strs[i].length() || strs[i][len] != strs[i+1][len]){
                    out = true;
                    break;
                }
            }
            if(out) break;
            len++;
        }

        return strs[0].substr(0, len);
    }
};