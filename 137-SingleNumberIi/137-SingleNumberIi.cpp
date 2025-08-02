// Last updated: 8/2/2025, 10:47:08 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            bool isUnique = true;
            for(int j=0;j<n;j++){
                if(i != j && nums[i] == nums[j]){
                    isUnique = false;
                    break;
                }
                
                }
                if(isUnique){
                    return nums[i];
                
            }
        }
        return -1;
    }
};