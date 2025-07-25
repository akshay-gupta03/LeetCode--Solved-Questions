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
    int pre=0;
    int post=0;
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    TreeNode *node = new TreeNode(preorder[pre]);
        pre++;
        if(node->val != postorder[post]){
            node->left = constructFromPrePost(preorder,postorder);
        }
        if(node->val != postorder[post]){
            node->right = constructFromPrePost(preorder,postorder);
        }
        post++;
        return node;    
    }
};