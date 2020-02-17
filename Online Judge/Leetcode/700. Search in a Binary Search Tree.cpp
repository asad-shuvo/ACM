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
   // TreeNode* ret=NULL;
    TreeNode* dfs(TreeNode* root,int val){
         if(root==NULL)return NULL;
        if(root->val==val)return root;
        TreeNode* r1=dfs(root->left,val);
          TreeNode* r2=dfs(root->right,val);
      //  if(r1==NULL and r1==NULL)return NULL;
        if(r1!=NULL)return r1;
        if(r2!=NULL)return r2;
        return NULL;
         }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)return NULL;
        if(root->val==val)return root;
        TreeNode* ret=dfs(root,val);
        return ret;
    }
};
