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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if(root1==nullptr && root2==nullptr){
        return nullptr;
    }
    else if(root1==nullptr){
        return root2;
    }
    else if(root2==nullptr){
        return root1;
    }
    queue<pair<TreeNode*, TreeNode*>>q;
    q.push({root1,root2});
    while(q.empty()==false){
        auto check=q.front();
        q.pop();
        check.first->val+=check.second->val;
        if(check.first->left!=nullptr && check.second->left!=nullptr){
            q.push({check.first->left, check.second->left});
        }
        else if(check.first->left==nullptr && check.second->left!=nullptr ){
            check.first->left=check.second->left;
        }

        if(check.first->right!=nullptr && check.second->right!=nullptr){
            q.push({check.first->right,check.second->right});
        }
        else if (check.first->right==nullptr && check.second->right!=nullptr){
            check.first->right=check.second->right;
        }   
    }
    return root1;
    }
};