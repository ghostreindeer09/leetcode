// Last updated: 8/2/2025, 10:47:56 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        if (x % 10 == 0) return false;
        
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        return x == reversed || x == reversed / 10;
    }
};
