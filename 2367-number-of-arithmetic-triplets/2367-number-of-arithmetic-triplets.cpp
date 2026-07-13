class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> hash;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i+1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (hash[nums[i]] != 0 && hash[nums[i] + diff] != 0 && hash[nums[i] + diff*2] != 0) {
                res++;
            }
        }
        return res;
    }
};