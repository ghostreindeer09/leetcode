// Last updated: 8/2/2025, 10:47:47 PM
class Solution {
public:
    int findFirst(vector<int>& nums,int target){
        int low =0;
        int high = nums.size()-1;
        int first = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=target)
            high = mid-1;
            else
           low = mid+1;
            if(nums[mid] == target)
            first = mid;
        }
        return first;
    }
    int findLast(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int last = -1;
        while(low<=high){
             int mid = low+(high-low)/2;
            if(nums[mid]<=target)
            low = mid+1;
            else
            high = mid-1;
            if(nums[mid] == target)
            last = mid;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        result[0]=findFirst(nums,target);
        if(result[0]!=-1)
        result[1]=findLast(nums,target);
        return result;
    }
    
};