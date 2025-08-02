// Last updated: 8/2/2025, 10:46:31 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_res = 0;
        for(int i=0;i<nums.size();i++){
            xor_res ^= i^nums[i];
        }
        xor_res ^= nums.size();
        return xor_res;
    }
};