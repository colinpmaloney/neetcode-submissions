class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        auto largest = max_element(heights.begin(), heights.end());
        int index = distance(heights.begin(), largest);

        int width = 1;
        int l = 0;
        int r = 0;
        int largestRectangle = *largest;

        int minLeft = index;
        while(width < heights.size()){
            int nextL = index - l - 1;
            int nextR = index + r + 1;

            if(nextL >= 0 && nextR < heights.size()){
                if(heights[nextL] > heights[nextR]){
                    l++;
                }
                else{
                    if(heights[nextR] == heights[index]){
                        index = nextR;
                        l = 0;
                        r = 0;
                    }else{
                        r++;
                    }
                }
            }

            else if(nextL >= 0){
                    l++;
            }
            else if(nextR < heights.size()){
                if(heights[nextR] == heights[index]){
                    index = nextR;
                    l = 0;
                    r = 0;
                }else{
                    r++;
                }
            }
            
            int leftIndex = index - l;
            int rightIndex = index + r;

            width = (index + r) - (index - l) + 1;
            int minHeight = heights[index];
            for(int x = leftIndex; x < rightIndex + 1; x++){
                minHeight = min(heights[x], minHeight);
            }
            
            int curArea = minHeight * width;
            largestRectangle = max(largestRectangle, curArea);
        }

        return largestRectangle;

    }
};


/* Brute Force

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

*/
