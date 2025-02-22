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
      TreeNode* recoverFromPreorder(string traversal) {
        unordered_map<int,TreeNode*> m;
        int i = 0;
        int n = traversal.size();
        int count = 0;
        int num = 0;
        while (i < n) {
            count = 0;
            num = 0;
            while (i<n && traversal[i]=='-') {
                count++;
                i++;
            }

            while (i<n && traversal[i]!='-') {
                num=num*10+(traversal[i]-'0');
                i++;
            }

            TreeNode* node = new TreeNode(num);
            if (count == 0) {
                m[count] = node;
            } else {
                if (m.find(count - 1) != m.end()) {
                    TreeNode* parent = m[count - 1];
                    if (parent->left == nullptr) {
                        parent->left = node;
                    } else {
                        parent->right = node;
                    }
                }
                m[count] = node; 
            }
        }
        return m[0]; 
    }
};