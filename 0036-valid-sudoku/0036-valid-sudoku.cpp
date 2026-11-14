class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char c) {
       
        for(int i = 0; i < 9; i++) {
            if(i != row && board[i][col] == c)
                return false;
            if(i != col && board[row][i] == c)
                return false;

        
            int r = 3*(row/3) + i/3;
            int c1 = 3*(col/3) + i%3;

            if((r != row || c1 != col) && board[r][c1] == c)
                return false;
        }

        return true;
    
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                char ch = board[i][j];

                if(ch != '.') {
                    if(!isSafe(board, i, j, ch))
                        return false;
                }
            }
        }

        return true;
    }
};
