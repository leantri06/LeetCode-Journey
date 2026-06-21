class Solution {
public:
    int findLHS(vector<int>& nums) {
        int max_freq = 0;
        unordered_map<int, int> hash;
        for (int x : nums) {
            hash[x]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (hash[nums[i]+1] > 0) max_freq = max(max_freq, hash[nums[i]] + hash[nums[i]+1]);
        }
        return max_freq;
    }
};