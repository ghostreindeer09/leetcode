// Last updated: 8/2/2025, 10:46:14 PM
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int freq = 1;
        int prevE = nums[0];
        for(int i=1;i<nums.size();++i){
            if(nums[i]!=prevE){
                freq+=1;
                prevE = nums[i];
            }
            if( freq == 3)
            return nums[i];
        }
        return nums[0];
    }
};