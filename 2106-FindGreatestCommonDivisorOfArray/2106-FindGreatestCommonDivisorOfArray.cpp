// Last updated: 8/2/2025, 10:45:25 PM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minVal = *min_element(nums.begin(),nums.end());
        int maxVal = * max_element(nums.begin(),nums.end());
        return __gcd(minVal,maxVal);
    }
};