class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if (map.count(remain)) {
                return {map[remain], i};
            }
            map[nums[i]] = i;
        }
        return {0,0};
    }
};