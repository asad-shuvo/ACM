#include<bits/stdc++.h>
using namespace std;
struct node{
	node *left,*right;
	int key;
};
node* insert(node* root,int key){
	if(root==NULL){
		root=new node();
		root->key=key;
			root->left=root->right=NULL;
	}
	else if(key<root->key){
		root->left=insert(root->left,key);
	}
	else root->right=insert(root->right,key);
	
	return root;
}
void preorder(node* root){
	if(root==NULL)return;
	cout<<root->key<<" ";
	preorder(root->left);
	preorder(root->right);
}
int f;
void search(int key,node* root){
	if(root==NULL)return;
	if(root->key==key){
		f=1;
		return;
	}
	if(root->key>key)
	search(key,root->left);
	else search(key,root->right);
}
node* findMin(node* root){
	while(root->left!=NULL)root=root->left;
	return root;
}
node* Delete(node* root,int key){
	if(root==NULL)return root;
	else if(key<root->key){
		root->left=Delete(root->left,key);
	}
	else if(key>root->key){
		root->right=Delete(root->right,key);
	}
	
	else{
		if(root->left==NULL && root->right==NULL){
			delete root;
			root=NULL;
		}
		else if(root->left==NULL){
			node* tmp=root;
			root=root->right;
			delete tmp;
		}
		else if(root->right==NULL){
			node* tmp=root;
			root=root->left;
			delete tmp;
		}
		else{
			node* tmp=findMin(root->right);
			root->key=tmp->key;
			root->right=Delete(root->right,tmp->key);
		}
	}
	return root;
}
int main()
{
	node* root=NULL;
	root=insert(root,10);
root=	insert(root,20);
	root=insert(root,3);
root=	insert(root,5);
	root=insert(root,1);
	root=insert(root,11);
	root=insert(root,12);
	root=insert(root,5);
	preorder(root);
	cout<<endl;
	root=Delete(root,20);
		preorder(root);
}
