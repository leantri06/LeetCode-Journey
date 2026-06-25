class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size());
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                res[count] = nums[i];
                count++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                res[count] = nums[i];
                count++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > pivot) {
                res[count] = nums[i];
                count++;
            }
        }
        return res;
    }
};