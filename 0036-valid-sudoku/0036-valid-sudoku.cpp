class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> hash;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && hash[board[i][j]] > 0) return false;
                hash[board[i][j]]++;
            }
        }

        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> hash;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.' && hash[board[j][i]] > 0) return false;
                hash[board[j][i]]++;
            }
        }

        for (int i = 2; i < 9; i += 3) {
            for (int j = 2; j < 9; j += 3) {
                unordered_map<char, int> hash;
                hash[board[i][j]]++;
                hash[board[i][j-1]]++;
                hash[board[i][j-2]]++;
                hash[board[i-1][j]]++;
                hash[board[i-1][j-1]]++;
                hash[board[i-1][j-2]]++;
                hash[board[i-2][j]]++;
                hash[board[i-2][j-1]]++;
                hash[board[i-2][j-2]]++;
                for (auto x : hash) {
                    if (x.first != '.' && x.second > 1) return false;
                }
            }
        }
        return true;
    }
};