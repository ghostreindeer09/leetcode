// Last updated: 8/2/2025, 10:46:02 PM
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0, right = (long long)sqrt(c);
        while(left<=right){
            long long sum = left*left+right*right;
            if(sum == c) return true;
            else if(sum<c) left++;
            else right--;
        }
        return false;
    }
};