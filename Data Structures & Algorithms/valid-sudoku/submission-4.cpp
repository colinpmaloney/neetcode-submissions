class Solution {
public:

    // Return true if nothing bad
    bool checkCurPos(unordered_map<char, int>& section, char curPos){
        if(curPos == '.') return true;

        // If the number has already been used in this row return false
        if(section[curPos] == 1)
            return false;

        // Set the number in this row to true
        section[curPos] = 1;
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> section;
        // Check each row
        // For each position in each row
        for(const auto& row : board){
            section.clear();
            for(const char& curPos : row){
                if(!checkCurPos(section, curPos)) return false;
            }
        }

        // Check each column
        for(int x = 0; x < 9; x++){
            section.clear();
            for(int y = 0; y < 9; y++){
                int curPos = board[y][x];
                if(!checkCurPos(section, curPos)) return false;
            }
        }      

        for(int x = 0; x < 9; x++){
            section.clear();
            // Check the top left corner
            if(x == 0){
                for(int px = 0; px < 3; px++){
                    for(int py = 0; py < 3; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 1){
                for(int px = 3; px < 6; px++){
                    for(int py = 0; py < 3; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 2){
                for(int px = 6; px < 9; px++){
                    for(int py = 0; py < 3; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 3){
                for(int px = 0; px < 3; px++){
                    for(int py = 3; py < 6; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 4){
                for(int px = 3; px < 6; px++){
                    for(int py = 3; py < 6; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 5){
                for(int px = 6; px < 9; px++){
                    for(int py = 3; py < 6; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 6){
                for(int px = 0; px < 3; px++){
                    for(int py = 6; py < 9; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 7){
                for(int px = 3; px < 6; px++){
                    for(int py = 6; py < 9; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
            else if(x == 8){
                for(int px = 6; px < 9; px++){
                    for(int py = 6; py < 9; py++){
                        char curPos = board[py][px];
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
            }
        }  
        return true;
    }
};
