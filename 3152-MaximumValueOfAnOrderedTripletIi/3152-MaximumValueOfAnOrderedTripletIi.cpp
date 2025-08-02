// Last updated: 8/2/2025, 10:45:10 PM
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        int maxPrefix = nums[0];
        long long best_diff = LLONG_MIN;
        for(int j=1;j<n-1;++j){
            best_diff = max(best_diff,(long long)(maxPrefix-nums[j]));
            
                res = max(res,best_diff*nums[j+1]);
                maxPrefix = max(maxPrefix,nums[j]);
            
        }
        return res;
    }
};