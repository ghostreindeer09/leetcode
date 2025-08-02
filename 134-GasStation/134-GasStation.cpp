// Last updated: 8/2/2025, 10:47:10 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tgas = 0;
        int tcost = 0;
        int start = 0;
        int tank = 0;
        for(int i=0;i<gas.size();i++){
            tgas += gas[i];
            tcost += cost[i]; 
            tank += gas[i]-cost[i];

            if(tank <0){
                start = i+1;
                tank = 0;
            }
        }
        return (tgas < tcost) ? -1:start;
    }
};