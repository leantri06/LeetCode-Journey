class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (i > k) {
                map[nums[i-k-1]]--;
            }
            if (map[nums[i]] == 1) return true;
            map[nums[i]]++;
        }
        return false;
    }
};