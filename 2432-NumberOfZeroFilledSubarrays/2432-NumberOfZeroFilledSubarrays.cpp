// Last updated: 9/3/2025, 6:32:56 PM
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long sum = 0, len =0;
        for(int i:nums){
            if(i == 0){
                len++;
                sum += len;
            }
            else
            len = 0;
        }
        return sum;
    }
};