class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash.insert(nums[i]);
        }
        int res = 0;
        for (int x : hash) {
            if (hash.count(x-1) == 0) {
                int i = 0;
                while (hash.count(x+i) != 0) {
                    i++;
                }
                res = max(res, i);
            } else {
                continue;
            }
        }
        return res;
    }
};