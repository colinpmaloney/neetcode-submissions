class Solution {
public:
    int maxArea(vector<int>& heights) {
        int bestArea = 0;
        int l = 0;
        int r = heights.size() - 1;

        int area;
        while(l < r){
            area = min(heights[l], heights[r]) * (r-l);
            if(area > bestArea) bestArea= area;

            if(heights[l] < heights[r])
                l++;
            else
                r--;
        }

        return bestArea;
    }
};
