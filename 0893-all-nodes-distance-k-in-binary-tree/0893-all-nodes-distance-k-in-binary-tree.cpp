/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    vector<int> ans;
    unordered_map<int,TreeNode*> parent;
    queue<TreeNode*> q;
    q.push(root);
    while(q.empty()!=true){
        int length=q.size();
        for(int i=0;i<length;i++){
            TreeNode* top=q.front();
            q.pop();
            if(top->left){
                parent[top->left->val]=top;
                q.push(top->left); 
            }
            if(top->right){
                parent[top->right->val]=top;
                q.push(top->right); 
            }
        }
    }

    unordered_map<int,int> done;
    q.push(target);
    while(k!=0  && q.empty()!=true){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* top=q.front();
            q.pop();
            done[top->val]=1;
            if(parent[top->val]!=nullptr && done[parent[top->val]->val]!=1){
                q.push(parent[top->val]);
            }
            if(top->left!=nullptr && done[top->left->val]!=1){
                q.push(top->left);
            }
            if(top->right!=nullptr && done[top->right->val]!=1){
                q.push(top->right);
            }
            
        }
        k--;
    }
    while(q.empty()!=true){
        ans.push_back(q.front()->val);
        q.pop();
    }
    return ans;     
    }
};