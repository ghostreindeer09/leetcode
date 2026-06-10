// Last updated: 10/06/2026, 22:27:11
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> ans = nums;
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }
};