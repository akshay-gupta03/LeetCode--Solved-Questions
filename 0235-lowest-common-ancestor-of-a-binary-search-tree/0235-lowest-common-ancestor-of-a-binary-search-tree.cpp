/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    int right=max(p->val,q->val);
    int left=min(p->val,q->val);
    while(true){
        if(root->val>right){
            root=root->left;
        }
        else if(root->val<left){
            root=root->right;
        }
        else{
            return root;
        }   
    }    
    }
};