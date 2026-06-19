class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for (int x : nums) {
            hash[x]++;
        }
        vector<pair<int, int>> map(hash.begin(), hash.end());
        sort(map.begin(), map.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(map[i].first);
        }
        return res;
    }
};