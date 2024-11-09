class Solution {
public:
    long long minEnd(int n, int x) {
        long long i = x, y = x;
        for (long long i = 0; i < n - 1; i++)
        {
            y = (y + 1) | x;
        }
        return y;
    }
};