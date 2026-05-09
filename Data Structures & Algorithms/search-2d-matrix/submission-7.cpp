class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int width = matrix[0].size();

        int l = 0;
        int r = width-1;        
        int index = (l+r) / 2;

        while(row < matrix.size() && target > matrix[row][r]){      
            row++;
        }

        if(row >= matrix.size() || target < matrix[row][0]) return false;

        while(l <= r){
            index = (l+r) / 2;
            int curPos = matrix[row][index];
            if(curPos == target) return true;
            if(curPos > target)
                r = index - 1;
            else
                l = index + 1;
        }

        return false;
    }
};
