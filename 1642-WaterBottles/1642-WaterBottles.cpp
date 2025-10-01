// Last updated: 10/1/2025, 9:36:40 PM
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        while(numBottles >= numExchange){
            numBottles -= (numExchange-1);
            totalDrunk++;
        }
        return totalDrunk;
    }
};