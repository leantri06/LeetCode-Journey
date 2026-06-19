class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> hash;
        for (int i = 0; i < strs.size(); i++) {
            array<int, 26> count = {0};
            for (char x : strs[i]) {
                count[x-'a']++;
            }
            hash[count].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for (auto x : hash) {
            res.push_back(x.second);
        }
        return res;
    }
};