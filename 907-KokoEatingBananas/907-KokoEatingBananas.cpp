// Last updated: 8/2/2025, 10:45:53 PM
class Solution {
public:
    long long calcTime(vector<int>& piles, int k){
        int n = piles.size();
        long long totTime = 0;
        for(int i =0;i<n;i++){
            totTime +=ceil(double(piles[i])/k);
        }
        return totTime;
       
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(),piles.end());
    while(low <= high){
        int mid = low+(high-low)/2;
        long long totTime = calcTime(piles,mid);
        if(totTime <= h)
        high = mid-1;
        else
        low = mid+1;
    }
    return low;
    }
};