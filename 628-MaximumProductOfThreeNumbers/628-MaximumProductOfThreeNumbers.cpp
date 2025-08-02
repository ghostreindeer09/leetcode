// Last updated: 8/2/2025, 10:46:03 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int opt1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int opt2 = nums[0]*nums[1]*nums[nums.size()-1];
        return max(opt1, opt2);
    }
};