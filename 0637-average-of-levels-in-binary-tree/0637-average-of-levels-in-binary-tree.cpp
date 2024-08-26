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
    vector<double> averageOfLevels(TreeNode* root) {
    queue<TreeNode*> q;
    vector<double> ans;
    int current=1,save=1,next=0;
    double total;
    q.push(root);
    while(q.empty()==false){
        TreeNode* temp=q.front();
        total+=temp->val;
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
            ans.push_back(total/save);
            total=0;
            current=next;
            save=next;
            next=0;
        }
    }
    return ans;
    }
};