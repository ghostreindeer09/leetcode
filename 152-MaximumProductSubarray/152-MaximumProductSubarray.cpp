// Last updated: 8/2/2025, 10:47:01 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini = nums[0];
        int result = nums[0];
       
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxi,mini);
            }
            maxi = std::max(nums[i],maxi*nums[i]);
            mini = std::min(nums[i],mini*nums[i]);
            result = std::max(result,maxi);
           
           
        }
         return result;
    }
};