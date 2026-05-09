class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int vec = 0;
        int width = matrix[0].size();
        int vecCount = matrix.size();
        bool correctArray = false;

        int l = 0;
        int r = width-1;        
        int index = (l+r) / 2;
        while(vec < vecCount){      
            // If our value is greater than what our current vec has. Goto next vec
            if(target > matrix[vec][r] && correctArray == false ){
                vec++;
                continue;
            }else if(target < matrix[vec][l]) return false;
            else if (target == matrix[vec][index]) return true;
            // Run the binary search
            else{
                correctArray = true;
                while(l < r){
                    int curPos = matrix[vec][index];
                    if(curPos == target) return true;
                    if(curPos > target)
                        r--;
                    else{
                        if(index == l){
                            index++;
                            curPos = matrix[vec][index];
                            if(curPos == target) return true;
                            else return false;
                        }else
                            l++;
                    }
                    index = (l+r) / 2;
                }
            }
        }

        return false;
    }
};
