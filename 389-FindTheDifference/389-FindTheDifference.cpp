// Last updated: 8/2/2025, 10:46:17 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for(char c :s)
        result ^= c;
        for(char c :t)
        result ^= c;
        return result;
    }
    
};