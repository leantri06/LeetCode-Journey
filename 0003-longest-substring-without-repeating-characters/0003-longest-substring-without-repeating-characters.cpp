class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxLen = 0;
        unordered_map<char, int> hash;
        while (right < s.size()) {
            if (hash[s[right]] == 0) {
                hash[s[right]]++;
                right++;
                maxLen = max(maxLen, right - left);
            } else {
                while (hash[s[right]] != 0) {
                    hash[s[left]]--;
                    left++;
                }
            }
        }
        return maxLen;
    }
};