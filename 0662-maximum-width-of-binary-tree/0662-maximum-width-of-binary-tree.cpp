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
    int widthOfBinaryTree(TreeNode* root) {
    if(root==nullptr){
        return 0;
    }
    int ans=0;
    queue<TreeNode*> q;
    queue<unsigned long long> num;
    q.push(root);
    num.push(1);
    while(q.empty()==false){
        int size=q.size();
        unsigned long long left=num.front();
        int right=0;
        for(int i=0;i<size;i++) {
            TreeNode* curr=q.front();
            unsigned long long index=num.front();
            q.pop();
            num.pop();
            right=index;
            if (curr->left) {
                q.push(curr->left);
                num.push(index*2);
            }
            if (curr->right) {
                q.push(curr->right);
                num.push(index*2+1);
            }
        }
        ans=max(ans,(int)(right-left+1));
    }
    return ans;    
    }
};