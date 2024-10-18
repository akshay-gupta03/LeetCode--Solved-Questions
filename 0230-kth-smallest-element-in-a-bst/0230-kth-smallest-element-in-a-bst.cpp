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
    int kthSmallest(TreeNode* root, int k) {
    vector<int> ans; 
    tree(root,ans);
    sort(ans.begin(),ans.end());
    int value=k-1;
    return ans[value];    
    }

    void tree(TreeNode* root,vector<int> &ans){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->val);
        tree(root->left,ans);
        tree(root->right,ans);          
    }
};