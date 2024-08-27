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
    int maxDepth(TreeNode* root) {
    // if(root==nullptr){
    //     return 0;
    // } 
    // int left=maxDepth(root->left);
    // int right=maxDepth(root->right);
    // if(left>right){
    //     return left+1;
    // }
    // return right+1;
    queue<TreeNode*> q;
    if(root==nullptr){
        return 0;
    }
    int current=1,next=0,cnt=0;
    q.push(root);
    TreeNode* temp;
    while(q.empty()==false){
        temp=q.front();
        q.pop();
        current--;
        if(temp->left!=nullptr){
            q.push(temp->left);
            next++;
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
            next++;
        }
        if(current==0){
            cnt++;
            current=next;
            next=0;
        }

    }
    return cnt;
    }
};