// Last updated: 8/2/2025, 10:46:35 PM
class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        return (num-1)%9 + 1;
    }
};