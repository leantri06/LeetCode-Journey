class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        vector<int> dp1(nums.size(), 1);
        int suffix = 1;
        for (int i = 0; i < nums.size(); i++) {
            dp1[i] = prefix;
            prefix *= nums[i];
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            dp1[i] *= suffix;
            suffix *= nums[i];
        }
        return dp1;
    }
};