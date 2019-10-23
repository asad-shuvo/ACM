#include<bits/stdc++.h>
using namespace std;
struct node{
    int roll;
    node *prev, *next;
};
node *root,*tail;
void print(){
node *current_node=root;
while(current_node!=NULL){

    printf("%d\n",current_node->roll);
    current_node=current_node->next;
}
}
void append(int roll)
{
    if(root==NULL){
        root=new node();
        root->roll=roll;
        root->next=NULL;
            tail=root;
    }
    else{
        node *newnode=new node();
        newnode->roll=roll;
        newnode->next=NULL;
        tail->next=newnode;
        tail=tail->next;
    }
}
int main()
{
    append(1);
    append(2);
    append(6);
    print();
}
