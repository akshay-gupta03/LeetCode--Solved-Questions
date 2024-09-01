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
    vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    ansget(root,"",ans);
        return ans;
    }

    void ansget(TreeNode* root,string path,vector<string>& ans ){   
    if(root==nullptr){
        return;
    }
    path+=to_string(root->val);
    if(root->left== nullptr && root->right== nullptr)              
        ans.push_back(path);
    
    path+="->";
    ansget(root->left,path,ans);
    ansget(root->right,path,ans);
    }
};