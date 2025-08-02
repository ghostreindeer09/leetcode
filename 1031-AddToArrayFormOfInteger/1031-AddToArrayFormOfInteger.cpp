// Last updated: 8/2/2025, 10:45:47 PM
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int idx = num.size()-1, carry = k;
        while(idx >= 0 || carry > 0){
            if(idx >= 0){
                carry += num[idx];
                idx--;
            }
            ans.push_back(carry%10);
            carry /= 10;
           
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};