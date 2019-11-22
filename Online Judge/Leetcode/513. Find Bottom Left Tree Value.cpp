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
    int findBottomLeftValue(TreeNode* root) {
        map<TreeNode*,int>mp;
        mp[root]=1;
        int m=1;
        queue<TreeNode*>q;
        q.push(root);
        int vl=root->val;
        while(!q.empty()){
            TreeNode* hld=q.front();
            q.pop();
            if(hld->left!=NULL){
                mp[hld->left]=mp[hld]+1;
                if(mp[hld->left]>m){
                    m=mp[hld->left];
                   
                    vl=hld->left->val;
                }
                 q.push(hld->left);
                
            }
             if(hld->right!=NULL){
                mp[hld->right]=mp[hld]+1;
                if(mp[hld->right]>m){
                    m=mp[hld->right];
                   
                    vl=hld->right->val;
                }
                   
                    q.push(hld->right);
                   
                }
                
        }
        return vl;
    }
};
