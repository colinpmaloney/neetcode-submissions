class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curBest = 0;
        for(int x = 0; x < prices.size()-1; x++)
        {
            for(int y = x+1; y < prices.size(); y++){
                if((prices[y] - prices[x]) > curBest)
                    curBest = prices[y] - prices[x];
            }
        }
        return curBest;
        }
};
