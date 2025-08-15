// Last updated: 8/15/2025, 1:36:58 PM
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<int>s;
        int del = 0;
        s.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s.size()%2 == 0)
            s.push(nums[i]);

            else{
                if(s.top() == nums[i])
                del++;

                else
                s.push(nums[i]);
            }
        }
        if(s.size()%2 == 1) del++;
        return del;
    }
};