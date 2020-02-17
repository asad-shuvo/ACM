/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countr(struct TreeNode* root){
    if(root==NULL)return 0;
    else return 1+countr(root->left)+countr(root->right);
}
bool solve(struct TreeNode* root,int cnt,int indx){
    if(root==NULL)return true;
    if(indx>=cnt)return false;
    int r1=solve(root->left,cnt,indx*2+1);
    int r2=solve(root->right,cnt,indx*2+2);
    return (r1 & r2);
}
bool isCompleteTree(struct TreeNode* root){
    int cnt=countr(root);
    bool ret=solve(root,cnt,0);
    return ret;
}


