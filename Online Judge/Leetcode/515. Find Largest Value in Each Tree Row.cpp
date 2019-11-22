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
    vector<int> largestValues(TreeNode* root) {
        vector<int>r;
        if(root==NULL)return r;
      //  r.push_back(root->val);
         map<TreeNode*,int>mp;
        mp[root]=1;
        int m=1;
        queue<TreeNode*>q;
        q.push(root);
        int M=root->val;
        while(!q.empty()){
            TreeNode* hld=q.front();
            q.pop();
            if(hld->left!=NULL){
                mp[hld->left]=mp[hld]+1;
                if(mp[hld->left]>m){
                    r.push_back(M);
                    M=hld->left->val;
                    m=mp[hld->left];
                }
                M=max(hld->left->val,M);
                 q.push(hld->left);
                
            }
             if(hld->right!=NULL){
                mp[hld->right]=mp[hld]+1;
                if(mp[hld->right]>m){
                      r.push_back(M);
                     M=hld->right->val;
                    m=mp[hld->right];
                   
                }
                    M=max(hld->right->val,M);
                    q.push(hld->right);
                   
                }
                
        }
        r.push_back(M);
        return r;
    } 
};
