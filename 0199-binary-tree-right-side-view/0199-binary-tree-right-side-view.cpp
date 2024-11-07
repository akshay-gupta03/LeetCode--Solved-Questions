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
    vector<int> rightSideView(TreeNode* root) {
    if(root==nullptr){
        return {};
    }  
    queue<TreeNode*> level;
    vector<int> ans;
    level.push(root);

    while(level.empty()!=true){
        int length=level.size();
        for(int i=0;i<length;i++){
            TreeNode* instant=level.front();
            level.pop();

            if(i==length-1){
                ans.push_back(instant->val);
            }

            if(instant->left!=nullptr){
                level.push(instant->left);
            }

            if(instant->right!=nullptr){
                level.push(instant->right);
            }
        }
    }
    return ans;    
    }
};