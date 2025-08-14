// Last updated: 8/14/2025, 1:01:59 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        int help = 1;
        while(help < n){
            help = (help << 1)+1;

        }
        return help ^ n;
    }
};