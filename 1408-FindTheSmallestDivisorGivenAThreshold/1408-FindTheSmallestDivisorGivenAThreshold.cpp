// Last updated: 8/2/2025, 10:45:41 PM
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end()),mid, sum;
        while(low<=high){
            mid = low+(high-low)/2;
            sum = 0;
            for(int i:nums){
                sum += (i+mid-1)/mid;
            }
            if(sum>threshold)
           low = mid+1;
            else
            high = mid-1;
        }
        return low;
    }
};