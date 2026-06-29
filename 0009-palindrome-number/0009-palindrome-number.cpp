class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string a = to_string(x);
        int l = 0;
        int r = a.size() - 1;
        while (l <= r) {
            if (a[l] == a[r]) {
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
    }
};