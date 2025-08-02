// Last updated: 8/2/2025, 10:47:38 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size() - 1;i >= 0;i--){
            if(digits[i]+1 != 10){
                digits[i]++;
                return digits;
            }
            digits[i] =0;
            if(i == 0){
                digits.insert(digits.begin(),1);
                return digits;
            
            }
            

        }
        return digits;
    }
};