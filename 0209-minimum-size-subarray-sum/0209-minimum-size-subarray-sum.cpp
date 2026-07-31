class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0; 
        int total = 0;
        int res = 1e9;
        for (int right = 0; right < nums.size(); right++) {
            total += nums[right];
            while (total >= target) {
                res = min(res, right - left + 1);
                total -= nums[left];
                left++;
            }
        }
        if (res == 1e9) return 0;
        return res;
    }
};