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
void reverse()
{
	node *current,*prev,*tmp;
	current=head;
	prev=NULL;
	while(current!=NULL){
		tmp=current->next;
		current->next=prev;
		prev=current;
		current=tmp;
	}
	head=prev;
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
	reverse();
		print();
}
