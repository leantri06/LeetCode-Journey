class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> hash;
            for (int j = i; j < s.size(); j++) {
                hash[s[j]]++;
                if (hash['0'] <= k || hash['1'] <= k) {
                    res++;
                }
            }
        }
        return res;
    }
};