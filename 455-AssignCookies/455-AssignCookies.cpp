// Last updated: 8/2/2025, 10:46:11 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int count=0, i=0, j=0;
        while(i<g.size() && j<s.size()){
            if(s[j] >= g[i]){
                count++;
                i++;
                j++;
            }
            else
            j++;
        }
        return count;
    }
};