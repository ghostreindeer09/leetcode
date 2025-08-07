// Last updated: 8/7/2025, 5:09:29 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int x = 0;
        for(string op: operations){
            if(op[1] == '+')
            x++;
            else
            x--;
        }
        return x;
    }
};