class Solution {
public:

    // int DFS(vector<int>& cost, int i){
    //     if(i >= cost.size()) return 0;
    //     int currentCost = cost[i];
    //     return min(currentCost + DFS(cost, i+1), currentCost + DFS(cost, i+2));
    // }

    // int minCostClimbingStairs(vector<int>& cost) {
    //     return min(DFS(cost, 0), DFS(cost, 1));
    // }

        int memo(vector<int>& cost, int i, unordered_map<int, int>& mp){
        if(i >= cost.size()) return 0;
        if(mp.count(i)) return mp[i];

        int currentCost = cost[i];
        mp[i] = min(currentCost + memo(cost, i+1, mp), currentCost + memo(cost, i+2, mp));
        return mp[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int, int> zero;
        unordered_map<int, int> one;
        return min(memo(cost, 0, zero), memo(cost, 1, one));
    }
};
