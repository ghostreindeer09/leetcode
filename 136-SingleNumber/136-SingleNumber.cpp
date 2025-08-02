// Last updated: 8/2/2025, 10:47:09 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num:nums){
            result^=num;
        }
        return result;
    }
};