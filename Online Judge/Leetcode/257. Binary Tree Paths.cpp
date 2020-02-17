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
    vector<string>result;
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        if(root==NULL)return result;
        pathFinder(root,s);
        return result;
    }
    void pathFinder(TreeNode* node,string path){
        if(node->left==NULL and node->right==NULL){
            if(path.size()!=0){
                path+="->";
                path+=to_string(node->val);
                
            }
            else{
                path+=to_string(node->val);
            }
             result.push_back(path);
        return;
        }
        if(path.size()==0){
            path+=to_string(node->val);
        }
        else{
            path+="->";
             path+=to_string(node->val);
        }
        if(node->left!=NULL){
            pathFinder(node->left,path);
        }
        if(node->right!=NULL){
            pathFinder(node->right,path);
        }
        return;
       
    }
};
