class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int bestArea = 0;

        while(l < r){
            int leftHeight = heights[l];
            int rightHeight = heights[r];
            int lowerHeight = min(leftHeight, rightHeight);
            bestArea = max(bestArea, lowerHeight * (r - l));

            if(leftHeight < rightHeight)
                l++;
            else
                r--;
        }

        return bestArea;
    }
};
