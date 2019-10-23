#include <bits/stdc++.h>
using namespace std;
struct node{
int roll;
node *next,*prev;
};
node *tail,*root;
void append(int roll){
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
void nodedelete(int roll)
{
    node *current_node=root;
    while(current_node->roll!=roll){

        tail=current_node;
        current_node=current_node->next;
    }
    if(current_node==root){
        node *temp=root;
        root=root->next;
        delete(temp);
    }
    else{
        tail->next=current_node->next;
    }
}
void print(){
    node *currentnode=root;
    while(currentnode->next!=NULL)
    {
        printf("%d\n",currentnode->roll);
        currentnode=currentnode->next;
    }
    printf("%d\n",currentnode->roll);
}
int main()
{
    append(1);
    append(2);
    append(3);
    append(4);
    append(5);
    nodedelete(4);
    print();
}
