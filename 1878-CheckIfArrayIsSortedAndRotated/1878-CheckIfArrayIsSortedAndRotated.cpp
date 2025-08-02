// Last updated: 8/2/2025, 10:45:28 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                count++;
                if (count > 1) {
                    return false;
                }
            }
        }
        return count == 0 || (count == 1 && nums.back() <= nums[0]);
    }
};