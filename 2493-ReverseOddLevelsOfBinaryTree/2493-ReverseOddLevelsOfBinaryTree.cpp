// Last updated: 8/2/2025, 10:45:15 PM
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*>q;
        bool isOdd = false;
        q.push(root);
        
        while(!q.empty()){
            int levelSize = q.size();
            vector<TreeNode*> level;
            for(int i=0;i<levelSize;i++){
                TreeNode* temp = q.front();q.pop();
                level.push_back(temp);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(isOdd){
                int left = 0, right = level.size()-1;
                while(left<right){
                    swap(level[left]->val,level[right]->val);
                    ++left;
                    --right;
                }
            }
            isOdd = !isOdd;
        }
        return root;
    }
};