// Last updated: 8/2/2025, 10:44:59 PM
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1] == nums[i])
            ans ^= nums[i];
        }
        return ans;
    }
};