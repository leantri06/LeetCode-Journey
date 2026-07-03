class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                res[i] = nums[i/2];
            } else {
                res[i] = nums[n + (i-1)/2];
            }
        }
        return res;
    }
};