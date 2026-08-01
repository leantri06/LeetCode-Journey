class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res = 0;
        int left = 0;
        unordered_map<char, int> hash;
        for (int right = 0; right < s.size(); right++) {
            hash[s[right]]++;
            while (hash['0'] > k && hash['1'] > k) {
                hash[s[left]]--;
                left++;
            } 
            res += (right - left + 1);
        }
        return res;
    }
};