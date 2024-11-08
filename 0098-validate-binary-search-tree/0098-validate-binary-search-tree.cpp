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
    bool isValidBST(TreeNode* root) {
    if(root==nullptr){
        return false;
    } 

    vector<int> points;
    inorder(root,points); 

    set<int> unique(points.begin(),points.end());
    if(unique.size()!=points.size())
        return false;

    for(int i=0;i<points.size()-1;i++){
        if(points[i]>points[i+1])
            return false;
    }       
    return true;
    }

    void inorder(TreeNode* root, vector <int> &points){
    if(root==nullptr){
        return;
    }
    inorder(root->left,points);
    points.push_back(root->val);    
    inorder(root->right,points);
    }
};