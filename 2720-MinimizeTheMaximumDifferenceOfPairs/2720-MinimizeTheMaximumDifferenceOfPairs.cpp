// Last updated: 8/2/2025, 10:45:09 PM
class Solution {
public:
bool canFormPairs(vector<int>& nums, int maxDiff, int p){
    int count = 0;
    int i = 0;
    int n = nums.size();
    while(i<n-1){
        if(nums[i+1]-nums[i]<=maxDiff){
            count++;
            i += 2;
        }
        else
        i++;
    }
    return count >= p;
}
    int minimizeMax(vector<int>& nums, int p) {
       sort(nums.begin(), nums.end());
       int left = 0;
       int right = nums.back()-nums.front();
       int answer = right;
       while(left <= right){
        int mid = left+(right-left)/2;
        if(canFormPairs(nums,mid,p)){
            answer = mid;
            right = mid-1;
        }
        else
        left = mid+1;
       }
        return answer;
    }
};