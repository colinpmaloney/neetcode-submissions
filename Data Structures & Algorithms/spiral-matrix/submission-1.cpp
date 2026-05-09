class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int height = matrix.size(); 
        int width = matrix[0].size();

        int leftBound = 0;
        int topBound = 0;
        int rightBound = width - 1;
        int bottomBound = height - 1;


        enum Direction{
            RIGHT,
            UP,
            DOWN,
            LEFT
        };

        int curX = 0;
        int curY = 0;

        vector<int> result;

        Direction curDir = RIGHT;

        while((topBound <= bottomBound) && (leftBound <= rightBound)){
            switch (curDir){
                case RIGHT:
                    if(curX <= rightBound){
                        result.emplace_back(matrix[curY][curX]);
                        curX++;
                    }else{
                        topBound++;
                        curX--;

                        curY++;
                        curDir = DOWN;
                    }
                    break;
                case DOWN:
                    if(curY <= bottomBound){
                        result.emplace_back(matrix[curY][curX]);
                        curY++;
                    }else{
                        rightBound--;
                        curY--;

                        curX--;
                        curDir = LEFT;
                    }
                    break;
                case LEFT:
                    if(curX >= leftBound){
                        result.emplace_back(matrix[curY][curX]);
                        curX--;
                    }else{
                        curX++;
                        bottomBound--;

                        curY--;
                        curDir = UP;
                    }
                    break;
                case UP:
                    if(curY >= topBound){
                        result.emplace_back(matrix[curY][curX]);
                        curY--;
                    }else{
                        curY++;
                        leftBound++;
                        
                        curX++;
                        curDir = RIGHT;
                    }
                    break;
            }
        }

        return result;
    }
};
