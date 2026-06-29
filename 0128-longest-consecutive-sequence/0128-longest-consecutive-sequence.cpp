class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int res = 0;
        for (int x : hash) {
            if (hash.count(x-1) == 0) {
                int i = 0;
                while (hash.count(x+i) != 0) {
                    i++;
                }
                res = max(res, i);
            }
        }
        return res;
    }
};