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

private:
    void ans(TreeNode*root,int &sum, int low,int high){
    if(root){
        if(root->val <=high && root->val >=low) sum+=root->val;
        ans(root->left,sum,low,high);
        ans(root->right,sum,low,high);
        }
    }
    
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
    int sum=0;
    ans(root,sum,low,high);
    return sum;
    }
};