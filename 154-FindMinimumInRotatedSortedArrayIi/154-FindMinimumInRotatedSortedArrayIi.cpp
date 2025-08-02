// Last updated: 8/2/2025, 10:46:58 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>nums[high])
            low = mid+1;
            else if(nums[mid]<nums[high])
            high = mid;
            else
            high--;

        }
        return nums[low];
    }
};