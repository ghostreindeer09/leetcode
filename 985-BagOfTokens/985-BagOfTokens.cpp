// Last updated: 8/3/2025, 12:31:23 PM
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score = 0,  maxScore =0;
        int left = 0, right = tokens.size()-1;
        while(left <= right){
            if(power >= tokens[left]){
                power -= tokens[left++];
                score++;
                maxScore = max(maxScore,score);
            }
            
            else if(score >= 1 && left < right){
                power += tokens[right--];
                score--;
            }
            else
            break;
        }
        return maxScore;
        
    }
};