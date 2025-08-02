// Last updated: 8/2/2025, 10:46:23 PM
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        if(n == 1) return 10;
        int total = 10;
        int current = 9;
        for(int i =2;i<=n;i++){
            current *= (10-(i-1));
            total += current;
        }
        return total;
    }
};