// Last updated: 8/2/2025, 10:45:43 PM
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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int maxSum = INT_MIN;
        int maxLevel = 1;
        int level = 1;
        while(!q.empty()){
            int levelSum = 0;
            int levelSize = q.size();
            for(int i=0;i<levelSize;i++){
                TreeNode* temp = q.front();q.pop();
                levelSum += temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(levelSum > maxSum){
                maxSum = levelSum;
                maxLevel = level;
            }
            level++;
        }
        return maxLevel;
    }
};