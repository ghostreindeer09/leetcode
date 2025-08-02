// Last updated: 8/2/2025, 10:47:14 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int profit = 0;
      for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1]){
            profit += prices[i]-prices[i-1];
        }
      }  
      return profit;
    }
};