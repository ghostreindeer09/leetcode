// Last updated: 8/2/2025, 10:45:01 PM
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sumNum = 0;
        int temp =x;
        while(temp>0){
            sumNum += temp%10;
            temp/=10;
        }
        if(x % sumNum == 0)
        return sumNum;
        return -1;
    }
};