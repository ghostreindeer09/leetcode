// Last updated: 8/2/2025, 10:47:41 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current = nums[0];
        int max_global = nums[0];
        for(int i=1;i<nums.size();i++){
            max_current = max(nums[i],max_current+nums[i]);
            max_global = max(max_current, max_global);
        }
        return max_global;
    }
};