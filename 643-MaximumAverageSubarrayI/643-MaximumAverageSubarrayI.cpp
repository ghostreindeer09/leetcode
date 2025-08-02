// Last updated: 8/2/2025, 10:46:00 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int window_sum =0;
        for(int i=0;i<k;i++){
            window_sum+=nums[i];
        }
        int max_sum = window_sum;
        for(int i=k;i<n;i++){
            window_sum += nums[i] - nums[i-k];
            max_sum = max(max_sum,window_sum);
        }
        return static_cast<double>(max_sum)/k;
    }
};