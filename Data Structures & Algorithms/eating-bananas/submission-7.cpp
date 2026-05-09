class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int smallest = r;

        while(l <= r){
            int rate = (l+r) / 2;
            int turns = 0;
            for(const auto & p : piles){
                turns += ceil((double) p / rate);
            }    
            if(turns <= h){
                smallest = rate;
                r = rate - 1;
            }else{
                l = rate + 1;
            }
        }

        return smallest;
    }
};
