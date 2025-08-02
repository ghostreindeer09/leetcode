// Last updated: 8/2/2025, 10:45:03 PM
class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1] <= nums[2])
        return "none";
        else if(nums[0] == nums[1] && nums[1] == nums[2])
        return "equilateral";
        else if(nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0])
        return "isosceles";
        else 
        return "scalene";
    }
};