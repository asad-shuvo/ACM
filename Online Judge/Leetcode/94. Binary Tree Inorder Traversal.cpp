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
    vector<int>val;
    void inorder(TreeNode* root){
        if(root==NULL)return;
         if(root->left!=NULL){
    inorder(root->left);
    //    val.push_back(v);
        }
        if(root!=NULL){
            val.push_back(root->val);
        }
        if(root->right!=NULL){
             inorder(root->right);
      //  val.push_back(v);
        }
       return ;
       
    }
    vector<int> inorderTraversal(TreeNode* root) {
       inorder(root);
        return val;
    }
};
