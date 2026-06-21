class Solution {
public:
    int findLHS(vector<int>& nums) {
        static const auto _____ = []()
        {
            ios::sync_with_stdio(false);
            cin.tie(nullptr);
            return nullptr;
        }();
        sort(nums.begin(), nums.end());
        int l = 0;
        int max_length = 0;
        for (int r = 0; r < nums.size(); r++) {
            while (nums[r] - nums[l] > 1) {
                l++;
            }
            if (nums[r] - nums[l] == 1) {
                max_length = max(max_length, r-l+1);
            }
        }
        return max_length;
    } 
};