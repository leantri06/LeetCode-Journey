class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        for (string x : operations) {
            if (x[1] == '+') {
                sum++;
            } else {
                sum--;
            }
        }
        return sum;
    }
};