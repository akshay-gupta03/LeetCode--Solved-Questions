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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> route;
    answercheck(root,targetSum,route,ans);
    return ans;    
    }

    void answercheck(TreeNode* root, int targetSum,vector<int> route, vector<vector<int>> &ans){
    if(root==nullptr){
        return;
    }
    
    route.push_back(root->val);
    int sum=0;
    int size=route.size();
    if(root->left==nullptr && root->right==nullptr){
        for(int i=0;i<size;i++){
            sum+=route[i];
        }
        if(sum==targetSum){
            ans.push_back(route);
        }
    }
    answercheck(root->left,targetSum,route,ans);
    answercheck(root->right,targetSum,route,ans);
    route.pop_back();    
    }
};