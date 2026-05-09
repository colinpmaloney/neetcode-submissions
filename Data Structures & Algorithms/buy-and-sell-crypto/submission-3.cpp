class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0; // Buy
        int r = 1; // Sell

        int maxProfit = 0;
        while (r < prices.size()){
            // If buy price is cheaper than sell price
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                if(profit > maxProfit) maxProfit = profit;
            }else{
                l = r;
            }
            r++;
        }

        return maxProfit;
    }
};
