class Solution {
public:
    vector<int> twoSum_bruteForce(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
    vector<int> twoSum_hashMap(vector<int>& nums, int target) {
        unordered_map<int,int> hash; 
        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if (hash.find(remain) != hash.end()) {
                return {hash[remain], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        return twoSum_hashMap(nums, target);
    }
};