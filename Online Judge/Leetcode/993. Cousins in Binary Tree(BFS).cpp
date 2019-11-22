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

    bool isCousins(TreeNode* root, int x, int y) {
int xd,yd,xp,yp;
        queue<TreeNode*>q;
        q.push(root);
       map<TreeNode*,int>mp;
        mp[root]=1;
        while(!q.empty()){
            TreeNode* hld=q.front();
            q.pop();
            if(hld->left!=NULL){
                q.push(hld->left);
                mp[hld->left]=mp[hld]+1;
                if(hld->left->val==x){
                    xd=mp[hld]+1;
                    xp=hld->val;
                }
                else if(hld->left->val==y){
                    yd=mp[hld]+1;
                    yp=hld->val;
                }
            }
            if(hld->right!=NULL){
                q.push(hld->right);
                mp[hld->right]=mp[hld]+1;
                 if(hld->right->val==x){
                    xd=mp[hld]+1;
                    xp=hld->val;
                }
                else if(hld->right->val==y){
                    yd=mp[hld]+1;
                    yp=hld->val;
                }
            }
        }
        if(xp!=yp and xd==yd){
            return true;
        }
        else return false;
    }
};
