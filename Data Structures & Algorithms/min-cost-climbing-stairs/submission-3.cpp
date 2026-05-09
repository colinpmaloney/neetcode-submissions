class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> currentCost(cost.size() + 1);

        int i = 2;
        while(i <= cost.size()){
            int a = cost[i - 2];
            int b = cost[i - 1];
            if(a + currentCost[i-2] < b + currentCost[i-1]){
                currentCost[i] = cost[i-2] + currentCost[i-2];
            }else{
                currentCost[i] = cost[i-1] + currentCost[i-1];
            }
            i++;
        }

        return currentCost.back();

    }
};
