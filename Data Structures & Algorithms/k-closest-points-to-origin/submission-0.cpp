class Solution {
public:

    float distance(int x, int y){
        return sqrt(pow(x,2) + pow(y,2));
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float, int>, vector<pair<float, int>>, greater<pair<float, int>>> pq;
        for(int x = 0; x < points.size(); x++){
            int posX = points[x][0];
            int posY = points[x][1];
            float curDistance = distance(posX, posY);
            pq.push({curDistance, x});
        }

        vector<vector<int>> result;
        for(int x = 0; x < k; x++){
            int index = pq.top().second;
            pq.pop();
            result.emplace_back(points[index]);
        }

        return result;
    }
};


// priority_queue<pair<float, int>> - Distance to Index