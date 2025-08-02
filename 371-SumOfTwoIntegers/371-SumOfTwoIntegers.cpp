// Last updated: 8/2/2025, 10:46:20 PM
class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};