// Last updated: 8/2/2025, 10:46:55 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el;
        for(int num:nums){
        if(count == 0){
            count = 1;
            el = num;

        }
        else if(num == el){
            count++;
        }
        else{
        count--;
        }
        }
        return el;
    }
};