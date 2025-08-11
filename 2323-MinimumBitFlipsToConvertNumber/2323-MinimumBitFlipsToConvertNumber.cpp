// Last updated: 8/11/2025, 8:56:22 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int xorVal = start ^ goal;
        while(xorVal){
            count += xorVal & 1;
            xorVal >>= 1;
    }
    return count;
    }
};