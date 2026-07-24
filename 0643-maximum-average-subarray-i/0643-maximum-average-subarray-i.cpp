class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double first_win = 0;
        double res = 0;
        for (int i = 0; i < k; i++) {
            first_win += nums[i];
            res = first_win;
        }
        for (int i = k; i < nums.size(); i++) {
            first_win = first_win - nums[i-k] + nums[i];
            res = max(res, first_win);
        }
        return res/k;
    }
};