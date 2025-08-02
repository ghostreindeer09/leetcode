// Last updated: 8/2/2025, 10:46:34 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                
            }
            if(count == 1){
                    ans.push_back(nums[i]);
                }
        }
        return ans;
    }
};