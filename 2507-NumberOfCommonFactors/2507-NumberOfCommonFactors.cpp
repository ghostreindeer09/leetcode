// Last updated: 8/2/2025, 10:45:12 PM
class Solution {
public:
    int commonFactors(int a, int b) {
        int c = 0;
        for(int i =1;i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
                c++;
            }
        }
        return c;
    }
};