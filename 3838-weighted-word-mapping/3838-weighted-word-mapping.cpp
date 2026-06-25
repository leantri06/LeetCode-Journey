class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string map = "zyxwvutsrqponmlkjihgfedcba";
        string res = "";
        for (string x : words) {
            int index = 0;
            for (char a : x) {
                index += weights[a - 'a'];
            }
            res += map[index%26];
        }
        return res;
    }
};