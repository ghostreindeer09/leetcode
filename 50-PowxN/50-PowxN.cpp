// Last updated: 8/2/2025, 10:47:42 PM
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double result = 1.0;
        double current_product = x;
        for (long long i = N; i > 0; i /= 2) {
            if (i % 2 == 1) {
                result *= current_product;
            }
            current_product *= current_product;
        }
        return result;
    }
};