// Last updated: 8/2/2025, 10:45:36 PM
class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(char &c:s){
            if(c == '6'){
                c='9';
                break;
            }
        }
        return stoi(s);
    }
};