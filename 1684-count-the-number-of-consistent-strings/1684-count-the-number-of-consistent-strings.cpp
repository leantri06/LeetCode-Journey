class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0;
        unordered_set<char> hash;
        for (char x : allowed) {
            hash.insert(x);
        }
        for (int i = 0; i < words.size(); i++) {
            for (char x : words[i]) {
                if (hash.count(x) == 0) {
                    res--;
                    break;
                }
            }
            res++;
        }
        return res;
    }
};