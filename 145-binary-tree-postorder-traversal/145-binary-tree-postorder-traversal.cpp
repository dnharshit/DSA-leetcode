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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        postOrder(root, vec);
        return vec;
    }
    
    void postOrder(TreeNode *node, vector<int> &vec){
        if(node==NULL){
            return;
        }
        postOrder(node->left, vec);
        postOrder(node->right, vec);
        vec.push_back(node->val);
    }
};