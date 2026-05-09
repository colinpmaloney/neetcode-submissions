class Solution {
public:
    int maxArea(vector<int>& heights) {
        int bestArea = 0;

        for(int x = 0; x < heights.size(); x++){
            for(int y = x+1; y < heights.size(); y++){
                int area = min(heights[x], heights[y]) * (y - x);
                if (area > bestArea) 
                    bestArea = area;
            }
        }

        return bestArea;
    }
};
