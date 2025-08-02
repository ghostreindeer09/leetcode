// Last updated: 8/2/2025, 10:46:48 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> arr(nums.begin(), nums.end());
        if(arr.size() != nums.size()){
        return true;
        }
         return false;
    }
   
};