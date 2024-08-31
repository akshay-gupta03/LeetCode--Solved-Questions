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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        diameter(root,ans);
        return ans;
    }

    int diameter(TreeNode* root, int &dia){
    if (root==nullptr) {
            return 0;
    }
    int left=diameter(root->left,dia);
    int right=diameter(root->right,dia);
    dia=max(dia,left+right);
    return 1+max(left,right);
    }
    

};