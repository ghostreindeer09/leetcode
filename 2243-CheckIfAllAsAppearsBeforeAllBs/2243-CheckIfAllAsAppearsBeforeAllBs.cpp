// Last updated: 8/2/2025, 10:45:19 PM
class Solution {
public:
    bool checkString(string s) {
        for(int i=1;i<s.size();i++){
            if(s[i-1]=='b' && s[i] == 'a')
            return false;
        }
        return true;
    }
};