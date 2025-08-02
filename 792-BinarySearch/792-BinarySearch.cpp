// Last updated: 8/2/2025, 10:45:55 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return(idx>=nums.size() || nums[idx]!=target)?-1:idx;
    }
};