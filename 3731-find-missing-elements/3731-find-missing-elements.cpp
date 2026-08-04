class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int s = nums[0];
        int l = nums[nums.size()- 1];
        unordered_map<int, int> hash;
        for (int x : nums) {
            hash[x]++;
        }
        for (int i = s; i < l + 1; i++) {
            if (hash[i] == 0) {
                res.push_back(i);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};