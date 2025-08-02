// Last updated: 8/2/2025, 10:45:46 PM
class Solution {
public:
    int findDays(vector<int>& weights, int capacity){
        int day = 1, load = 0;
        for(int weight:weights){
            if(load+weight>capacity)
            {
                day += 1;
                load = weight;
            }
            else
            load += weight;
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
       int  high = accumulate(weights.begin(),weights.end(),0);
       while(low <= high){
        int mid = low+(high - low)/2;
        int nofDays = findDays(weights, mid);
        if(nofDays <= days)
        high = mid-1;
        else
        low = mid+1;
       }
       return low;

    }
};