// Last updated: 8/2/2025, 10:45:27 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i] += n*(nums[nums[i]]%n);
        }
        for(int i=0;i<n;i++){
            nums[i] = nums[i]/n;
        }
        return nums;
    }
};