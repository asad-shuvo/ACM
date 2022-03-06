/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;s
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        queue<TreeNode*>q;
        q.push(root);
        int level_sum=-1;
        int level=1,mnlvel=1;
       
        while(!q.empty()){
            int cnt=0;
            int sz=q.size();
            while(sz--){
               TreeNode* cur = q.front(); q.pop();
                if (!cur) continue;
                cnt += cur->val;
                q.push(cur->left);
                q.push(cur->right);
            }
            if(cnt>level_sum){
                level_sum=cnt;
                mnlvel=level;
            }
            level++;
        }
        return mnlvel;
    }
};
