class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> section;

        // Check each row
        // For each position in each row
        for(const auto& row : board){
            section = vector<int>(9);
            for(const auto& x : row){
                if(x == '.') continue;
            
                int index = (int)x - 49;
                // If the number has already been used in this row return false
                if(section[index] == 1)
                    return false;

                // Set the number in this row to true
                section[index] = 1;
            }
            for(auto x : section) cout << x << ' ';
            cout << '\n';
        }

        // Check each column
        for(int x = 0; x < 9; x++){
            section = vector<int>(9);
            for(int y = 0; y < 9; y++){
                int curPos = board[y][x];
                if(curPos == '.') continue;
                int index = (int)curPos - 49;
                // If the number has already been used in this row return false
                if(section[index] == 1)
                    return false;

                // Set the number in this row to true
                section[index] = 1;
            }
        }      

        for(int x = 0; x < 9; x++){
            section = vector<int>(9);
            // Check the top left corner
            if(x == 0){
                for(int px = 0; px < 3; px++){
                    for(int py = 0; py < 3; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 1){
                for(int px = 3; px < 6; px++){
                    for(int py = 0; py < 3; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 2){
                for(int px = 6; px < 9; px++){
                    for(int py = 0; py < 3; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 3){
                for(int px = 0; px < 3; px++){
                    for(int py = 3; py < 6; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 4){
                for(int px = 3; px < 6; px++){
                    for(int py = 3; py < 6; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 5){
                for(int px = 6; px < 9; px++){
                    for(int py = 3; py < 6; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 6){
                for(int px = 0; px < 3; px++){
                    for(int py = 6; py < 9; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 7){
                for(int px = 3; px < 6; px++){
                    for(int py = 6; py < 9; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
            else if(x == 8){
                for(int px = 6; px < 9; px++){
                    for(int py = 6; py < 9; py++){
                        char curPos = board[py][px];
                        if(curPos == '.') continue;

                        int index = (int)curPos - 49;
                        cout << index << ' ';
                        // If the number has already been used in this row return false
                        if(section[index] == 1)
                            return false;

                        // Set the number in this row to true
                        section[index] = 1;
                    }
                }
            }
        }  

        return true;
    }
};
