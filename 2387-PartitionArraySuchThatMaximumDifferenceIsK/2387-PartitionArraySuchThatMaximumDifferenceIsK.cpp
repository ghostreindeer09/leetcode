// Last updated: 8/2/2025, 10:45:17 PM
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 1;
        int minVal = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]-minVal > k){
                ans++;
                minVal = nums[i];
            }
        }
        return ans;
    }
};