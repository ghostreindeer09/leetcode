// Last updated: 8/2/2025, 10:47:27 PM
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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        queue<TreeNode*> queueOfNodes;
        queueOfNodes.push(root->left);
        queueOfNodes.push(root->right);
        while(!queueOfNodes.empty()){
            TreeNode* left = queueOfNodes.front();queueOfNodes.pop();
            TreeNode* right = queueOfNodes.front();queueOfNodes.pop();
            if(left == nullptr && right == nullptr) continue;
            if(left == nullptr || right == nullptr) return false;
            if(left->val != right->val) return false;
            queueOfNodes.push(left->left);
            queueOfNodes.push(right->right);
            queueOfNodes.push(left->right);
            queueOfNodes.push(right->left);
            
        }
        return true;
    }
};