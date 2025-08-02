// Last updated: 8/2/2025, 10:45:49 PM
class Solution {
public:
    int fib(int n) {
        if(n<=1)
        return n;
        return fib(n-1)+fib(n-2);
    }
};