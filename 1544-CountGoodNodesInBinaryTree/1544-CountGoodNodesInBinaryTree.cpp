// Last updated: 8/3/2025, 11:53:53 AM
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
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int goodCount = 0;
        queue<pair<TreeNode*, int>>q;
        q.push(make_pair(root, root->val));
        while(!q.empty()){
            pair<TreeNode*,int> curr = q.front();
            q.pop();
            TreeNode* node = curr.first;
            int maxSoFar = curr.second;
            if(node->val >=maxSoFar){
                goodCount++;
            }
            int newMax = max(maxSoFar, node->val);
            if(node->left)
            q.push(make_pair(node->left,newMax));
            if(node->right)
            q.push(make_pair(node->right,newMax));
        }
        return goodCount;
    }
};