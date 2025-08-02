// Last updated: 8/2/2025, 10:47:26 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool isLtoR = true;
        while(!nodesQueue.empty()){
            vector<int> level;
            for(int n=nodesQueue.size();n>0;n--){
                TreeNode* temp = nodesQueue.front();nodesQueue.pop();
                level.push_back(temp->val);
                if(temp->left) nodesQueue.push(temp->left);
                if(temp->right) nodesQueue.push(temp->right);
            }
            if(!isLtoR)
        reverse(level.begin(),level.end());
         result.push_back(level);
        isLtoR = !isLtoR;
        }
       
       
        return result;
    }
};