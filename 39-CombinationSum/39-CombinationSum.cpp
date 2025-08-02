// Last updated: 8/2/2025, 10:47:44 PM
class Solution {
public:
    void findCombinations(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& current, int index){
        if(target == 0)
        return result.push_back(current);
        if(target < 0)
        return;
        for(int i = index;i<candidates.size();i++){
            current.push_back(candidates[i]);
            findCombinations(candidates, target-candidates[i], result, current, i);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        findCombinations(candidates, target, result, current, 0);
        return result;
    }
};