// Last updated: 8/2/2025, 10:45:29 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int missing = arr[mid]-(mid+1);
            (missing<k)?low = mid+1:high=mid-1;
        }
        return low+k;
    }
};