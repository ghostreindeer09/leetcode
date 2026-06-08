// Last updated: 08/06/2026, 16:25:55
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;
        for(int num:nums){
            if(num < pivot)
            result.push_back(num);
        }
        for(int num:nums){
            if(num == pivot)
            result.push_back(num);
        }
        for(int num: nums){
            if(num > pivot)
            result.push_back(num);
        }
        return result;
    }
};