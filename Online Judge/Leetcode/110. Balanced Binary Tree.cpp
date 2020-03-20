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
    int f;
   
    int cnt(TreeNode *root){
        if(!root)return 0;
         int left=cnt(root->left);
        int right=cnt(root->right);
        if(left>right)return left+1;
        else return right+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return 1;
        f=1;
       int left=cnt(root->left);
        int right=cnt(root->right);
   
        int dff=abs(left-right);
        if(dff>1)return false;
        return (isBalanced(root->left) && isBalanced(root->right));
        // return f;
    }
};
