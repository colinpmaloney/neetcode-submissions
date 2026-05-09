class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        // Monotonic decreasing stack
        stack<pair<int, int>> stk;

        for(int x = 0; x < temperatures.size(); x++){
            // The current iterations temperature
            int temp = temperatures[x];

            // The stack needs to be decreasing always
            // If something is on the stack but our current temp is higher
            // Pop it off and store the distance at the index in res
            while(!stk.empty() && temp > stk.top().first){
                auto pair = stk.top();
                stk.pop();
                res[pair.second] = x - pair.second;
            }
            stk.push({temp, x});
        }

        return res;
    }
};
