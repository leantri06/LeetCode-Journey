class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size()==1) return 0;
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