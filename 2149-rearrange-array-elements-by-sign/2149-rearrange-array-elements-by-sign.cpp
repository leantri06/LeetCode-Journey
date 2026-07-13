class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res, positive, negative;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) positive.push_back(nums[i]);
            else {
                negative.push_back(nums[i]);
            }
        }
        for (int i = 0; i < positive.size(); i++) {
            res.push_back(positive[i]);
            res.push_back(negative[i]);
        }
        return res;
    }
};