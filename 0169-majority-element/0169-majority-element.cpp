class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = 0;
        int count = 0;
        unordered_map<int, int> hash; 
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
            if (hash[nums[i]] > count) {
                max = nums[i];
                count = hash[nums[i]];
            }
        }
        return max;
    }
};