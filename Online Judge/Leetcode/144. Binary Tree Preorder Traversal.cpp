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
    vector<int>ret;
    void fun(TreeNode* root){
        if(!root)return;
        ret.push_back(root->val);
        fun(root->left);
        fun(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)return ret;
        fun(root);
        return ret;
    }
};
