// Last updated: 8/2/2025, 10:47:37 PM
class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        return x;
        int left =1, right = x/2, ans = 0;
        while(left<=right){
            long long mid = left+(right-left)/2;
            if(mid*mid == x)
            return mid;
            else if(mid*mid<x){
                 ans = mid;
                left = mid+1;
            }
            else
            right = mid-1;
        }
        return ans;
    }
};