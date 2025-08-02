// Last updated: 8/2/2025, 10:46:43 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
       return (n>0 && (n&(n-1))==0);
    }
};