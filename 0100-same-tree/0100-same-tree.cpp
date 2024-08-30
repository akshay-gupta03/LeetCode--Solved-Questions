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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p==nullptr && q==nullptr){
        return true;
    } 
    if(p==nullptr && q!=nullptr || p!=nullptr && q==nullptr) {
        return false;
    } 
    queue<TreeNode*>q1;
    queue<TreeNode*>q2;
    q1.push(p);
    q2.push(q);
    while(q1.empty()==false && q2.empty()==false){
        TreeNode* one=q1.front();
        q1.pop();
        TreeNode* two=q2.front();
        q2.pop();
        if(one->val!=two->val){
            return false;
        }
        if(one->left!=NULL && two->left!=NULL){
            q1.push(one->left);
            q2.push(two->left);
        }
        else if((one->left!=NULL && two->left==NULL) || (one->left==NULL && two->left!=NULL)){
            return false;
        }
        
        if(one->right!=NULL && two->right!=NULL){
            q1.push(one->right);
            q2.push(two->right);
        }
        else if((one->right!=NULL && two->right==NULL) || (one->right==NULL && two->right!=NULL)){
            return false;
        }
    }
    return true;
    }
};