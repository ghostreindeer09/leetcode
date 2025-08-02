// Last updated: 8/2/2025, 10:46:06 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> preSum;
        preSum[0] = 1;
        int currSum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            currSum += nums[i];
            if(preSum.find(currSum-k) != preSum.end())
            count += preSum[currSum-k];
        
        preSum[currSum]++;
        }
        return count;
    }
};