class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        for (auto x : hash) {
            if (x.second == 1) {
                return x.first;
            }
        }
        return 0;
    }
};