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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    vector<vector<int>> ans;
    if(root==nullptr){
        return ans;
    }
    while(q.empty()==false){
        int size=q.size();
        vector<int> inside;
        while(size!=0){
            TreeNode* temp=q.front();
            q.pop();
            if(temp!=nullptr){
                inside.push_back(temp->val);
            }
            if(temp->left!=nullptr){
                q.push(temp->left);
            }
            if(temp->right!=nullptr){
                q.push(temp->right);
            }
            size--;
        }
        ans.push_back(inside);
    }  
    reverse(ans.begin(),ans.end()); 
    return ans;    
    }
};