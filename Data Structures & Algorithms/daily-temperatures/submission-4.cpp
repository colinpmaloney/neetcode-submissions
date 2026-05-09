class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n);

        //   pair<Temp, Index>
        stack<pair<int, int>> stk;
        for(int x = 0; x < n; x++){
            int currentTemp = temperatures[x];
            if(stk.empty()){
                stk.emplace(pair<int, int>({currentTemp, x}));
            }else{
                while(!stk.empty() && currentTemp > stk.top().first){
                    result[stk.top().second] = x - stk.top().second;
                    stk.pop();
                }
                stk.emplace(pair<int, int>({currentTemp, x}));
            }
            
        }
        return result;
    }
};
