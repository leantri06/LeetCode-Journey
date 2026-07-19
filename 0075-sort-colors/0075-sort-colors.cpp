class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int x : nums) {
            hash[x]++;
        }
        vector<int> res(nums.size());
        for (int i = 0; i < hash[0]; i++) {
            nums[i] = 0;
        }
        for (int i = hash[0]; i < hash[0] + hash[1]; i++) {
            nums[i] = 1;
        }
        for (int i = hash[0] + hash[1]; i < hash[0] + hash[1] + hash[2]; i++) {
            nums[i] = 2;
        }
    }
};