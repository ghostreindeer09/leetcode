// Last updated: 8/10/2025, 9:41:09 PM
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = 0;
        int first = values[0]+0;
        int n = values.size();
        for(int j=1;j<n;j++){
            int second = values[j]-j;
             ans = max(ans,first+second);
            first = max(first,values[j]+j);
        }
        return ans;
    }
};