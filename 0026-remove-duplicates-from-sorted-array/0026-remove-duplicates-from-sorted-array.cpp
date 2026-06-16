class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> res;
        for (int i = 0; i < nums.size();) {
            if (res.count(nums[i])) {
                nums.erase(nums.begin() + i);
            } else {
                res.insert(nums[i]);
                i++;
            }
        }
        return res.size();
    }
};