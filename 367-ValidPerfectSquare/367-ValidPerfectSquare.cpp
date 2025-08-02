// Last updated: 8/2/2025, 10:46:21 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2)
        return num;
        int left =1, right = num/2;
        while(left<=right){
            int mid= left+(right-left)/2;
            long long sq = (long long)mid*mid;
            if(sq  == num)
            return true;
            else if(sq<num)
            
            left = mid+1;
            else
            right = mid-1;
        }
        return false;
    }
};