// Last updated: 8/2/2025, 10:46:09 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};