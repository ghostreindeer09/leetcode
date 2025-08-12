// Last updated: 8/12/2025, 9:52:11 PM
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long sum = 0;
        long ans = -1;
        for(int i=0;i<nums.size();i++){
            if(i >=2 && sum >nums[i]){
            ans = sum+nums[i];
            }
            sum += nums[i];
        }
        return ans;
        
    }
};