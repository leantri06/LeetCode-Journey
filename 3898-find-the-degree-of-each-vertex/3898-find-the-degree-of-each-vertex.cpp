class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> res(matrix.size());
        for (int i = 0; i < matrix[0].size(); i++) {
            res[i] = 0;
        }
        for (int i = 0; i < matrix[0].size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 1) {
                    res[i] += 1;
                }
            }
        }
        return res;
    }
};