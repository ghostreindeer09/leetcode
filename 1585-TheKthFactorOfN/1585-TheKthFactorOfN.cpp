// Last updated: 8/2/2025, 10:45:32 PM
class Solution {
public:
    int kthFactor(int n, int k) {
       std:: vector<int>factors;
        for(int i = 1;i*i<=n;i++){
            if(n%i == 0){
                factors.push_back(i);
            
            if(i != n/i){
                factors.push_back(n/i);
            }
            }
        }
        sort(factors.begin(),factors.end());
        if(k<=factors.size()){
            return factors[k-1];
        }
        return -1;
    }
};