// Last updated: 8/2/2025, 10:44:58 PM
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int num;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & 1)
            nums[i] = 1;
            else
            nums[i] = 0;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};