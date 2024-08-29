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
    bool hasPathSum(TreeNode* root, int targetSum) {
    if(root==nullptr){
        return false;
    }
    int newvalue=targetSum-root->val;
    if(root->left==nullptr && root->right==nullptr && newvalue==0){
        return true;
    }
    bool baye=hasPathSum(root->left,newvalue);
    bool daye=hasPathSum(root->right,newvalue);

    if(daye==true || baye==true){
        return true;
    }
    return false;
    }
};