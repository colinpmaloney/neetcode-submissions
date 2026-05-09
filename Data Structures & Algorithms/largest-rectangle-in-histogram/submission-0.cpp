class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int largest = 0;

        for(int x = 0; x < heights.size(); x++){
            int curMin = heights[x];
            int curLargest = curMin;
            for(int j = x + 1; j < heights.size(); j++){
                curMin = min(curMin, heights[j]);
                int curWidth = (j - x + 1);
                int curArea = curWidth * curMin;
                curLargest = max(curLargest, curArea);
            }
            largest = max(largest, curLargest);
        }

        return largest;
    }
};

// Brute Force
