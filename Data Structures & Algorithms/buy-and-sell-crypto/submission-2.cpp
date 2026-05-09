class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int curBest = 0;

        while(r < prices.size()){
            if(prices[l] > prices[r]){
                l = r;
            }else{
                if((prices[r] - prices[l]) > curBest)
                {
                    curBest = prices[r] - prices[l];
                }
                r++;
            }
        }

        return curBest;
    }
};
