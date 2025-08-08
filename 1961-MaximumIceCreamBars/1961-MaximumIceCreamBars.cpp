// Last updated: 8/8/2025, 11:35:37 AM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i] > coins) break;
            coins -= costs[i];
            count++;
        }
        return count;
    }
};