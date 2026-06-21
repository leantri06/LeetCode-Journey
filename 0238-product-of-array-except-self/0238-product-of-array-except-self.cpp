class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        vector<int> dp1(nums.size(), 1);
        int suffix = 1;
        vector<int> dp2(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++) {
            dp1[i] = prefix;
            prefix *= nums[i];
            dp2[nums.size()-1-i] = suffix;
            suffix *= nums[nums.size()-1-i];
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = dp1[i]*dp2[i];
        }
        return nums;
    }
};