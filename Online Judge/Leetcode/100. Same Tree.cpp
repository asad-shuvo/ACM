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
    bool fun(TreeNode* p,TreeNode* q){
        //cout<<p->val<<" "<<q->val<<endl;
     //   if(p->val==NULL and q->val)
        if(p!=NULL and q==NULL)return false;
        if(p==NULL and q!=NULL)return false;
        if(p==NULL and q==NULL)return true;
        if(p->val==q->val){
            bool t1=fun(p->right,q->right);
            bool t2=fun(p->left,q->left);
            if(t1==true and t2==true)return true;
            else return false;
        }
        else return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool z=fun(p,q);
        return z;
    }
};
