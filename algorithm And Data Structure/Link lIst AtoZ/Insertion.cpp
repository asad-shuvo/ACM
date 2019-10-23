#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head;


void FirstElement(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    head=temp;
}
void InsertEnd(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;

    node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void print()
{

    node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(i==1){
            FirstElement(x);
            continue;
        }
        InsertEnd(x);
    }
            print();

}
