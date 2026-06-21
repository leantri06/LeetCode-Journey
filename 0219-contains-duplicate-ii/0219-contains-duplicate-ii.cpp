class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        if (nums.size() < k + 1) {
            for (int i = 0; i < nums.size(); i++) {
                map[nums[i]]++;
            }
            for (auto x : map) {
                if (x.second > 1) return true;
            }
            return false;
        }
        for (int i = 0; i < k + 1; i++) {
            map[nums[i]]++;
        }
        for (auto x : map) {
            if (x.second > 1) return true;
        }
        for (int i = k + 1; i < nums.size(); i++) {
            map[nums[i]]++;
            map[nums[i-k-1]]--;
            if (map[nums[i]] > 1) return true;
        }
        return false;
    }
};