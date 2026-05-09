class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best = 0;
        int l = 0;
        int r = 1;
        while(r < prices.size()){
            int profit = prices[r] - prices[l];
            best = max(profit, best);
            // If the next day is cheaper, buy then instead and repeat set up
            if(prices[r] < prices[l]){
                l = r;
                r = l + 1;
            }else{
                // If next day is not cheaper, check the next day
                r++;
            }
        }

        return best;
    }
};
