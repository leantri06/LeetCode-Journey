class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash; 
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        for (auto x : hash) {
            if (x.second > nums.size()/2) {
                return x.first;
            }
        }
        return 0;
    }
};