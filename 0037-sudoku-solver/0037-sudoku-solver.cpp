class Solution {
public:
    bool isSafe(int i, int j, vector<vector<char>>& board, int k) {
        for (int p = 0; p < 9; p++) {
            // row check
            if (board[i][p] - '0' == k)
                return false;
            // col check
            if (board[p][j] - '0' == k)
                return false;
            // 3x3 box check
            if (board[3 * (i / 3) + p / 3][3 * (j / 3) + p % 3] - '0' == k)
                return false;
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        int n = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') {
                    for (int k = 1; k <= 9; k++) {
                        if (isSafe(i, j, board, k)) {
                            board[i][j] = '0' + k;

                            // recursion
                            bool repeat = solve(board);
                            if (repeat) {
                                return true;
                            } else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    // If no valid solution is found for the current cell, return false.
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};