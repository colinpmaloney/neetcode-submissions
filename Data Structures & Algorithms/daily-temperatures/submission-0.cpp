class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        int dist;

        for(int x = 0; x < temperatures.size(); x++)
        {
            dist = 0;
            for(int y = x + 1; y < temperatures.size(); y++){
                // Check if day[y] > than day[x]
                if(temperatures[y] > temperatures[x]){
                    dist = y - x;
                    break;
                }
            }
            result.emplace_back(dist);
        }

        return result;
    }
};
