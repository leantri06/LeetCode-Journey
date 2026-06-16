class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash;
        for (char x : s) {
            hash[x]++;
        }
        for (char x : t) {
            hash[x]--;
        }
        for (char x: s) {
            if (hash[x] != 0) return false;
        }
        for (char x: t) {
            if (hash[x] != 0) return false;
        }
        return true;
    }
};