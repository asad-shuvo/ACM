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
    vector<int>v1,v2,tmp;
    void dfs(TreeNode* node){
        if(node->left==NULL and node->right==NULL){
            tmp.push_back(node->val);
            return;
        }
        if(node->left!=NULL)dfs(node->left);
        if(node->right!=NULL)dfs(node->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL)return 1;
        if(root1==NULL and root2!=NULL)return 0;
        if(root2==NULL and root1!=NULL)return 0;
        
        dfs(root1);
        v1=tmp;
        tmp.clear();
        dfs(root2);
        v2=tmp;
     
        // if(v1.size()==0 and v2.size()==0){
        //    // cout<<"1"<<endl;
        //     v1.push_back(root1->val);
        //     v2.push_back(root2->val);
        // }
        int f=1;
        if(v1.size()!=v2.size())return 0;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])f=0;
        }
        return f;
    }
};
