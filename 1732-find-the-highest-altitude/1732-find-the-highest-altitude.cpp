class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> height(gain.size() + 1);
        height[0] = 0;
        int max = 0;
        for (int i = 1; i < gain.size() + 1; i++) {
            height[i] = height[i-1] + gain[i-1];
            if (height[i] > max) max = height[i];
        }
        return max;
    }
};