class Solution {
public:

    // Return true if nothing bad
    bool checkCurPos(unordered_set<char>& section, char curPos){
        if(curPos == '.') return true;
        // If the number has count 1 or more it has been used -> return false
        if(section.count(curPos)) return false;
        // Set the number in this row to true
        section.emplace(curPos);
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> section;
        // Check each row
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

        // Check each 3x3 cube
        for(int blockX = 0; blockX < 3; blockX++){
            for(int blockY = 0; blockY < 3; blockY++){
                section.clear();
                for(int px = blockX * 3; px < blockX * 3 + 3; px++){
                    for(int py = blockY * 3; py < blockY * 3 + 3; py++){
                        char curPos = board[py][px];
                        cout << px << ':' << py << "\t";
                        if(!checkCurPos(section, curPos)) return false;
                    }
                }
                cout << '\n';
            }
        }  
        return true;
    }
};
