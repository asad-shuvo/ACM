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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     vector<int>v;
        vector<vector<int>>r;
        if(root==NULL)return r;
        queue<TreeNode*>q;
        q.push(root);
        v.push_back(root->val);
      //  r.push_back(v);
      //  v.clear();
        map<TreeNode*,int>mp;
        mp[root]=1;
        int M=1;
        while(!q.empty()){
            TreeNode* hld=q.front();q.pop();
            if(hld->left!=NULL){
            mp[hld->left]=mp[hld]+1;
                if(mp[hld->left]>M){
                    M=mp[hld->left];
                     if(v.size()!=0)
            r.push_back(v);
                    v.clear();
                }
            }
             if(hld->right!=NULL){
            mp[hld->right]=mp[hld]+1;
                if(mp[hld->right]>M){
                    M=mp[hld->right];
                     if(v.size()!=0)
            r.push_back(v);
                    v.clear();
                }
            }
            if(hld->left!=NULL){
                v.push_back(hld->left->val);
                q.push(hld->left);
            }
            if(hld->right!=NULL){
                v.push_back(hld->right->val);
                q.push(hld->right);
            }
           
            //v.clear();
            
        }
        if(v.size()!=0)r.push_back(v);
        reverse(r.begin(),r.end());
        return r;
    }
};
