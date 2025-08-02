// Last updated: 8/2/2025, 10:44:55 PM
class Solution {
public:
    char kthCharacter(int k) {
        return 'a' +  __builtin_popcount(k-1);
    }
};