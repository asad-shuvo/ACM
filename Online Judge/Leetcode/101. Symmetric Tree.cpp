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
    vector<string>v1,v2;
    void left(TreeNode* root){
        if(root==NULL){
            v1.push_back("NULL");
            return;
        }
        v1.push_back(to_string(root->val));
        left(root->left);
        left(root->right);
    }
    void right(TreeNode* root){
        if(root==NULL){
            v2.push_back("NULL");
            return;
        }
        v2.push_back(to_string(root->val));
       right(root->right);
        right(root->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return 1;
        left(root->left);
        right(root->right);
        if(v1==v2)return true;
        else return false;
    }
};
