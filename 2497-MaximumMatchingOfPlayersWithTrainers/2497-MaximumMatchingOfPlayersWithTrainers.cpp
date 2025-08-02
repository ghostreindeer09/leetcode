// Last updated: 8/2/2025, 10:45:14 PM
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count = 0, i=0, j=0;
        while(i<players.size() && j<trainers.size()){
            if(players[i] <= trainers[j]){
                count++;
                i++;
                j++;
            }
            else
            j++;
        }
        return count;
    }
};