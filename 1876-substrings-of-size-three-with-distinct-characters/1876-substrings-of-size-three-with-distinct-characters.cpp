class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3) return 0;
        unordered_map<char, int> hash;
        int res = 0;
        bool flag = true;
        for (int i = 0; i < 3; i++) {
            hash[s[i]]++;
            if (hash[s[i]] > 1) {
                flag = false;
            } 
        }
        if (flag == true) res++;
        for (int i = 3; i < s.size(); i++) {
            hash[s[i]]++;
            hash[s[i-3]]--;
            if (hash[s[i]] == 1 && hash[s[i-1]] < 2 && hash[s[i-2]] < 2) res++;
        }
        return res;
    }
};