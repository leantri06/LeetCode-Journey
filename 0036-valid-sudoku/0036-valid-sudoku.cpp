class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            array<bool, 10> hash = {false};
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (hash[board[i][j] - '0'] == true) return false;
                hash[board[i][j] - '0'] = true;
            }
        }

        for (int i = 0; i < 9; i++) {
            array<bool, 10> hash = {false};
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') continue;
                if (hash[board[j][i] - '0'] == true) return false;
                hash[board[j][i] - '0'] = true;
            }
        }

        for (int i = 2; i < 9; i += 3) {
            for (int j = 2; j < 9; j += 3) {
                array<bool, 10> hash = {false};
                for (int r = i - 2; r <= i; r++) {
                    for (int c = j - 2; c <= j; c++) {
                        if (board[r][c] == '.') continue;
                        int num = board[r][c] - '0';
                        if (hash[num]) return false;
                        hash[num] = true;
                    }
                }
            }
        }
        return true;
    }
};