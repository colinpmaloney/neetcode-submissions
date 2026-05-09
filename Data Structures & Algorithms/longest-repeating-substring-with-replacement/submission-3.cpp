class Solution {
public:

    int mostFrequent(unordered_map<char, int>& chFreq){
        int res = 0;
        for(const auto& p : chFreq){
            res = max(res, p.second);
        }
        return res;
    }

    int characterReplacement(string s, int k) {
        unordered_map<char, int> chFreq;
        int l = 0;
        int result = 0;

        for(int r = 0; r < s.length(); r++){
            chFreq[s[r]]++;
            int maxCount = mostFrequent(chFreq);
            int dist = (r-l) + 1;
            if(dist - maxCount > k){
                chFreq[s[l++]]--;
                dist--;
            }

            result = max(result, dist);

        }

        return result;
    }
};
