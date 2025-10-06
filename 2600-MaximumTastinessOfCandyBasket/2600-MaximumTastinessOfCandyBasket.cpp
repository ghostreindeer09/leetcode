// Last updated: 10/6/2025, 10:32:38 PM
class Solution {
public:
    bool canFormBasket(const vector<int>& price, int k, int minDiff){
        int count = 1;
        int lastSelected = price[0];
        for(int i=0;i<price.size();i++){
            if(price[i]-lastSelected >= minDiff){
                count++;
                lastSelected = price[i];
            }
            if(count == k) return true;
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        int bestTastiness = 0;
        int left = 0, right = price.back()-price[0];
        while(left <= right){
            int mid = left+(right-left)/2;
            if(canFormBasket(price,k,mid)){
                bestTastiness = mid;
                left = mid+1;

            }
            else
            right = mid-1;
        }
        return bestTastiness;
        
    }
};