// Last updated: 8/3/2025, 3:09:43 PM
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int color1 = (coordinate1[0]-'a'+coordinate1[1]-'1')%2;
        int color2 = (coordinate2[0]-'a'+coordinate2[1]-'1')%2;
        return( color1 == color2 );
    }
};