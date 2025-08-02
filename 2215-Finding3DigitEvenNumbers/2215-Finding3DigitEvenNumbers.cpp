// Last updated: 8/2/2025, 10:45:22 PM
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> count(10,0);
        for(int d: digits)
        count[d]++;
        vector<int> result;
        for(int num = 100;num<=998;num+=2){
            int x = num/100;
            int y = (num/10)%10;
            int z = num%10;
            vector<int> temp_count = count;
        if(temp_count[x]-- >0 && temp_count[y]-- >0 && temp_count[z]-- >0){
        temp_count[x]--;
        temp_count[y]--;
        temp_count[z]--;
         result.push_back(num);
        }
        }
        
    return result;
    }
};