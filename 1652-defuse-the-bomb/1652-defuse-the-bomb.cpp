class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> res(code.size(), 0);
        if (k == 0) {
            return res;
        }
        int window = 0;
        if (k > 0) {
            for (int i = 0; i < k; i++) {
                window += code[i];
            }
            for (int i = 0; i < code.size(); i++) {
                window -= (code[i] - code[(i+k)%(code.size())]);
                res[i] = window;
            }
        } else {
            k = -k; 
            for (int i = code.size() - 1; i >= code.size() - k; i--) {
                window += code[i];
            }
            for (int i = code.size() - 1; i >= 0; i--) {
                window = window - code[i] + code[(i-k+code.size())%(code.size())];
                res[i] = window;
            }
        }
        return res;
    }
};