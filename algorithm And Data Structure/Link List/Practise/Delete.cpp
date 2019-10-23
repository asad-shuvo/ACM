#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node* next;
};
node* head;
void print()
{
	node* tmp=head;
	while(tmp!=NULL){
		cout<<tmp->val<<" ";
		tmp=tmp->next;
	}
}
void insert(int x)
{
	node* tmp=new node();
	tmp->val=x;
	tmp->next=NULL;
	node* t1=head;
	while(t1->next!=NULL){
		t1=t1->next;
	}
	t1->next=tmp;
}
void dlt(int pos)
{
	
	node* tmp=new node();
	node* t1=head;
	if(pos==1){
		t1=t1->next;
		head=t1;
		return;
	}
	for(int i=1;i<=pos-2;i++){
		t1=t1->next;
	}
	t1->next=t1->next->next;
}
int main()
{
	node* tmp=head;
	tmp=new node();
	tmp->next=NULL;
	tmp->val=4;
	head=tmp;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	print();
	cout<<endl;
	dlt(1);
		print();
}
