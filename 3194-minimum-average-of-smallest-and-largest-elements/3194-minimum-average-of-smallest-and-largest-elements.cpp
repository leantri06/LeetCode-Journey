class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        double res = 1e9;
        sort(nums.begin(), nums.end());
        while (l < r) {
            double temp = (nums[l] + nums[r]);
            if (res > temp) res = temp;
            l++;
            r--;
        }
        return res/2;
    }
};