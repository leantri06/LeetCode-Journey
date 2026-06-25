class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;
        for (int x: nums) {
            if (x % 3 == 0) continue;
            res++;
        }
        return res;
    }
};