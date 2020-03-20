#include<bits/stdc++.h>
using namespace std;
struct node{
	node *left,*right;
	int key;
};
node* newNode(int key){
	node* tmp=new node();
	tmp->key=key;
	tmp->left=tmp->right=NULL;
	return tmp;
}
node* insert(node* root,int key){
	if(root==NULL)return newNode(key);
	if(key<root->key){
		root->left=insert(root->left,key);
	}
	else root->right=insert(root->right,key);
	
	return root;
}
void preorder(node* root){
	if(root==NULL)return;
	cout<<root->key<<endl;
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
int main()
{
	node* root=NULL;
	root=insert(root,10);
	insert(root,20);
	insert(root,3);
	insert(root,5);
	insert(root,1);
	insert(root,11);
	insert(root,12);
	insert(root,5);
	int n;
	 cin>>n;
	
	 while(n--){
	 	 f=0;
	 	int x;
	 	cin>>x;
	 	search(x,root);
	 	f==1?cout<<"Found"<<endl:cout<<"Not Found"<<endl;
	 }
	
//	serach()
//	preorder(root);
}
