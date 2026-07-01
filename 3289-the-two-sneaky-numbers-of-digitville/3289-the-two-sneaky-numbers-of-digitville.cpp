class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> hash;
        for (int x : nums) {
            hash[x]++;
        }
        for (auto x : hash) {
            if (x.second == 2) {
                res.push_back(x.first);
            }
        }
        return res;
    }
};