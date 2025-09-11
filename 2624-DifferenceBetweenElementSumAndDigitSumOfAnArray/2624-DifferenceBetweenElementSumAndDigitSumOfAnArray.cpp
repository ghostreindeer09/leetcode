// Last updated: 9/11/2025, 6:42:25 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for(int i: nums){
            elementSum +=i;
            int y = i;
            while(i>0){
                digitSum += (i%10);
                i /= 10;
            }
        }
        return abs(elementSum-digitSum);
    }
};