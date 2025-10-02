// Last updated: 10/2/2025, 9:28:14 PM
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int empties = numBottles;
        while(empties >= numExchange){
            empties -= numExchange;
            totalDrunk++;
            empties++;
            numExchange++;
            
        }
        return totalDrunk;
    }
};