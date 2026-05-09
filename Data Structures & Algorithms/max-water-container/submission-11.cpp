class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int best = 0;
        while(l < r){
            int dist = r-l;
            int area = min(heights[l], heights[r]) * dist;
            best = max(best, area);

            if(heights[l] > heights[r])
                r--;
            else
                l++;
        }

        return best;    
    }
};
