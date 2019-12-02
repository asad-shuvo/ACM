#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        map<Node*,int>mp;
        mp[root]=0;
        if(root==NULL)return 0;
        queue<Node*>q;
        q.push(root);
        int M=0;
        while(!q.empty()){
            Node* t=q.front();
            q.pop();
            if(t->left){
                q.push(t->left);
                M=max(M,mp[t]+1);
                mp[t->left]=mp[t]+1;
            }
            if(t->right){
                q.push(t->right);
                M=max(M,mp[t]+1);
                mp[t->right]=mp[t]+1;
            }
        }
        return M;
    }

}; //End of Solution
