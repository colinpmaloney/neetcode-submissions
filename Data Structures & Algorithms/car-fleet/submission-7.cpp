class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pairs;
        for(int x = 0; x < position.size(); x++){
            pairs.emplace_back(pair<int, int>{position[x], speed[x]});
        }
        sort(pairs.rbegin(), pairs.rend());

        stack<double> stk;
        for(int x = 0; x < position.size(); x++){
            double time = (double)(target - pairs[x].first) / pairs[x].second;
            if (stk.empty()){
                stk.emplace(time);
            }else if (time > stk.top()){
                stk.emplace(time);
            }
        }

        return stk.size();
    }
};
