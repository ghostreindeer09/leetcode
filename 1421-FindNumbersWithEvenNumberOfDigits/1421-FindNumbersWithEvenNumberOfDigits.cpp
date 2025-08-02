// Last updated: 8/2/2025, 10:45:37 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0 ;
       for(int i:nums){
        int num = log10(i)+1;
         if(num%2==0)
      
        ++count;
        
       }
        return count;
      
    }
};