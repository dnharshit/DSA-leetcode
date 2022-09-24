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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        inOrder(root, vec);
        return vec;
    }
    
    void inOrder(TreeNode *node, vector<int> &vec){
        if(node==NULL){
            return;
        }
        
        if(node->left!=NULL) inOrder(node->left, vec);
        vec.push_back(node->val);
        if(node->right!=NULL) inOrder(node->right, vec);
    }
};