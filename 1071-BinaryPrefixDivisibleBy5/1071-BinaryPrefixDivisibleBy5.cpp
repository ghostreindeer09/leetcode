// Last updated: 8/2/2025, 10:45:44 PM
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> v;
        long long ans = 0;
        for(int ele:nums){
            ans = (ans*2+ele)%5;
            v.push_back(ans==0);
        }
        return v;
    }
};