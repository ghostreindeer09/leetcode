// Last updated: 8/2/2025, 10:47:13 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 1;
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> numSet(nums.begin(),nums.end());
        for(int num:numSet){
            if(numSet.find(num-1) == numSet.end()){
                int currentNum = num;
                int count = 1;
                while(numSet.find(currentNum+1) != numSet.end()){
                    currentNum++;
                    count++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};