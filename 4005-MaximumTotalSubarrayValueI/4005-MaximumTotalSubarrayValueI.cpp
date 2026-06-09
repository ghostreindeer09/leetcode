// Last updated: 09/06/2026, 11:41:25
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int gMin = nums.front(), gMax = nums.front();
        for(int num:nums){
            gMin = min(gMin,num);
            gMax = max(gMax,num);
        }
        return (long long) (gMax-gMin) * k;
    }
};