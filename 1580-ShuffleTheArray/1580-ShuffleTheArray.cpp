// Last updated: 16/06/2026, 08:53:00
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k = nums.size() / 2;
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(nums[i]);
            result.push_back(nums[i+k]);
        }
        return result;
    }
};