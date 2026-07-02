class Solution {
public:
    int sumDigit(int number) {
        int sum  = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int min1 = 1e9;
        for (int x : nums) {
            min1 = min(min1, sumDigit(x));
        }
        return min1;
    }
};