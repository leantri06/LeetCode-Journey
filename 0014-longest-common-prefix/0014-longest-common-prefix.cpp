class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int min_length = strs[0].size();
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].size() < min_length) min_length = strs[i].size();
        }
        for (int i = 0; i < min_length; i++) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] != strs[j+1][i]) return res;
            }
            res += strs[0][i];
        }
        return res;
    }
};