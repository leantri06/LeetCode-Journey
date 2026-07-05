class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1e9;
        for (int x : candies) {
            if (x > max) {
                max = x;
            }
        }
        vector<bool> res(candies.size());
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max) {
                res[i] = true;
            } else {
                res[i] = false;
            }
        }
        return res;
    }
};