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
class FindElements {

private:
    unordered_map<int,int> present;
    void resolve(TreeNode* node) {
        if (node->val==-1) {
            node->val=0;
        }
        present[node->val]=1;

        if(node->left!=nullptr){
            node->left->val=(node->val*2)+1;
            resolve(node->left);
        }

        if(node->right!=nullptr) {
            node->right->val=(node->val*2)+2;
            resolve(node->right);
        }
    }

public:
    FindElements(TreeNode* root) {
        resolve(root);
    }
    
    bool find(int target) {
        if(present[target]) {
            return 1;
        }

        return 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */