class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max1 = -1e9;
        double temp = 0;
        int window = 0;
        if (nums.size() <= k) {
            for (int i = 0; i < nums.size(); i++) {
                temp += nums[i];
            }
            max1 = temp;
            return max1/k;
        }
        for (int i = 0; i < k; i++) {
            temp += nums[i];
        }
        max1 = temp;

        for (int i = k; i < nums.size(); i++) {
            temp += nums[i] - nums[i-k];
            max1 = max(max1, temp);
        }
        return max1/k;
    }
};