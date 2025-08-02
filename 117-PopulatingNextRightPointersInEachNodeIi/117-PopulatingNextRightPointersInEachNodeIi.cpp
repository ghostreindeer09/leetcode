// Last updated: 8/2/2025, 10:47:16 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*>q;
        q.push(root);
        Node* prev;
        while(!q.empty()){
            int levelSize = q.size();
            prev = NULL;
           for(int i=0;i<levelSize;i++){
               Node* curr = q.front(); q.pop();
               if(prev) prev->next = curr;
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
               prev = curr;  
            }
        }
        return root;
    }
};