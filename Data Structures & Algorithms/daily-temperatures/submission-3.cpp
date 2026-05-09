class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Stack of pair {temperature, index}
        stack<pair<int, int>> stk;
        vector<int> result(temperatures.size(), 0);
        
        for(int x = 0; x < temperatures.size(); x++){
            while(!stk.empty() && temperatures[x] > stk.top().first){
                auto p = stk.top();
                stk.pop();
                cout << "Popped off " << p.first << " - " << p.second << '\n';
                result[p.second] = x - p.second;
            }

            if(stk.empty()){
                stk.push({temperatures[x], x});
                cout << "Pushed on " << temperatures[x] << " - " << x << '\n';
            }
            //  If number less than stack top
            else if(!stk.empty() && temperatures[x] <= stk.top().first){
                stk.push({temperatures[x], x});
                cout << "Pushed on " << temperatures[x] << " - " << x << '\n';
            }
        }

        return result;
    }
};
