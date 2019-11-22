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
    int mn=INT_MIN;
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        map<TreeNode*,int>mp;
        mp[root]=1;
      int  mn=INT_MAX;
        while(!q.empty()){
            TreeNode* hld=q.front();
            q.pop();
            if(hld->left==NULL and hld->right==NULL){
                mn=min(mn,mp[hld]);
            }
              if(hld->left!=NULL){
                  mp[hld->left]=mp[hld]+1;
                q.push(hld->left);
            }
             if(hld->right!=NULL){
                  mp[hld->right]=mp[hld]+1;
                q.push(hld->right);
            }
            
            
            
        }
        return mn;
    }
};
