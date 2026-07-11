class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l = 0;
        int r = 0;
        bool flag = false;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                r = i;
                flag = true;
                break;
            }
        }
        if (flag == false) return word;
        while (l <= r) {
            char temp = word[l];
            word[l] = word[r];
            word[r] = temp;
            l++;
            r--;
        }
        return word;
    }
};