// Last updated: 16/06/2026, 08:52:23
class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(auto it: s){
            if(it == '*'){
                if(!result.empty()){
                result.pop_back();
            }
            }
            else if(it == '#'){
                result += result;
            }
            else if(it == '%'){
                reverse(result.begin(),result.end());
            }
            else
            result += it;
        }
        return result;
    }
};