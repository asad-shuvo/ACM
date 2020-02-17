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
    int ret=false;
    bool hasPathSum(TreeNode* root, int sum) {
        int s=0;
        if(root==NULL)return false;
        pathSum(root,sum,s);
        return ret;
    }
    void pathSum(TreeNode* node,int sum,int s){
        if(node!=NULL)s+=node->val;
        if(node->left==NULL and node->right==NULL){
            if(s==sum){
                ret=true;
                return;
            }
        }
        if(node->left!=NULL){
            pathSum(node->left,sum,s);
        }
        if(node->right!=NULL){
            pathSum(node->right,sum,s);
        }
        return;
    }
};
