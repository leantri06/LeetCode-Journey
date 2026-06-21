class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> res;
        for (int i = 0; i < order.size(); i++) {
            for (int x : friends) {
                if (x == order[i]) res.push_back(order[i]);
            }
        }
        return res;
    }
};