// Last updated: 9/7/2025, 11:30:42 AM
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i] = 2*i-n+1;
        }
        return res;
    }
};