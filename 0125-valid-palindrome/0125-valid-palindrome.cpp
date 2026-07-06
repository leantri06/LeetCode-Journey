class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for (char x : s) {
            if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z')) {
                s1 += tolower(x);
            } else if ('0' <= x && x <= '9') {
                s1 += x;
            }
        }
        int left = 0;
        int right = s1.size() - 1;
        while (left <= right) {
            if (s1[left] != s1[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};