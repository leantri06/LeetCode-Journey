class Solution {
public:
    vector<int> prefix_product(vector<int>& nums) {
        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                res[i] = 1;
            } else {
                res[i] = res[i-1]*nums[i-1];
            }
        }
        return res;
    }
    vector<int> suffix_product(vector<int>& nums) {
        vector<int> res(nums.size());
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                res[i] = 1;
            } else {
                res[i] = res[i+1]*nums[i+1];
            }
        }
        return res;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>dp1 = prefix_product(nums);
        vector<int>dp2 = suffix_product(nums);
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = dp1[i]*dp2[i];
        }
        return nums;
    }
};