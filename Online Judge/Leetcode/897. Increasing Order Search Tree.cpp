class Solution {
public:
    TreeNode* cur = NULL;
    
    TreeNode* increasingBST(TreeNode* root) {
        if (!root) {
            return NULL;
        }
        TreeNode* ans = new TreeNode(0);
        cur = ans;
        inorder(root);
        return ans->right;
    }
    
    void inorder(TreeNode* node) {
        if (!node) {
            return ;
        }
        
        inorder (node->left);
        node->left = NULL;
        cur->right = node;
        cur = cur->right;
        inorder (node->right);
    }
};
