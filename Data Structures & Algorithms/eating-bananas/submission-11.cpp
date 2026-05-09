class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r){
            int rate = (l + r) / 2;
            int hours = 0;
            for(const auto& p : piles){
                hours += ceil((double) p / rate);
            }
            if(hours > h){
                l = rate + 1;
            }
            else {
                res = min(res, rate);
                r = rate - 1;
            }
        }

        return res;
    }
};
