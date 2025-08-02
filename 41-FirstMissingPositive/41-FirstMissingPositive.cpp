// Last updated: 8/2/2025, 10:47:43 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target = 1;
        for(int n:nums){
            if(n > 0 && n == target)
            target++;
            else if(n > target)
            return target;
        }
        return target;
    }
};