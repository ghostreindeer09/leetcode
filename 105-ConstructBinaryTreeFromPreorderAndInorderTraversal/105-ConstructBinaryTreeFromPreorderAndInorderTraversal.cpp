// Last updated: 8/2/2025, 10:47:24 PM
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
    unordered_map<int,int> map;
     int preIndex = 0;
     TreeNode* buildFromPre(vector<int>& preorder, int start, int end){
        if(start>end)
        return NULL;
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        if(start == end) return root;
        int mid = map[root->val];
        root->left = buildFromPre(preorder,start,mid-1);
        root->right = buildFromPre(preorder,mid+1,end);
        return root;
     }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     for(int i=0;i<inorder.size();i++)
     map[inorder[i]] = i;
     return buildFromPre(preorder,0,inorder.size()-1);

    }
};