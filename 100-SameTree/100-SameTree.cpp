// Last updated: 8/2/2025, 10:47:28 PM
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qP,qQ;
        qP.push(p);
        qQ.push(q);
        while(!qP.empty() && !qQ.empty()){
            TreeNode* nodep = qP.front();qP.pop();
            TreeNode* nodeq = qQ.front();qQ.pop();
            if(!nodep && !nodeq) continue;
            if(!nodep || !nodeq) return false;
            if(nodep->val != nodeq->val) return false;
            qP.push(nodep->left);
             qQ.push(nodeq->left);
             qP.push(nodep->right);
            qQ.push(nodeq->right);
            
           
        }
        return qP.empty() && qQ.empty();
    }
};