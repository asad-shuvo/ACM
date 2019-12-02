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
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

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

*/

    Node * insert(Node * root, int data) {
        
Node* newN=new Node(0);
newN->data=data;
if(root==NULL){
         return newN;   
        }
queue<Node*>q;
q.push(root);
while(!q.empty()){
    Node* t=q.front();
    q.pop();
    if(t->data>data){
        if(t->left){
            q.push(t->left);

        }
        else {t->left=newN;break;}
    }
    else{
        if(t->right){
            q.push(t->right);

        }
        else{ t->right=newN;break;}
    }
}

        return root;
    }

};
