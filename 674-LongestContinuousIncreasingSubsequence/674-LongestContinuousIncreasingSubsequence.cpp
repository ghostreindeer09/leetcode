// Last updated: 8/2/2025, 10:45:58 PM
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 0;
        int count = 1;
        for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
        }
        ans = max(ans,count);
        return ans;

    }
};