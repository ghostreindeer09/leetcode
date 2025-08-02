// Last updated: 8/2/2025, 10:45:06 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j] == x){
                res.push_back(i);
                break;
                }
            }
        }
        return res;
    }
};