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
    TreeNode* sortedBST(vector<int>& nums,int b,int e){
        if(b>e)return NULL;
        int mid=b+(e-b)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=sortedBST(nums,b,mid-1);
        root->right=sortedBST(nums,mid+1,e);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        TreeNode* root=sortedBST(nums,0,nums.size()-1);
        return root;
        
    }
};
