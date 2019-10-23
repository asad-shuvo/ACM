#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* head;

void FirstElement(int x)
{
    ListNode* temp=new ListNode(0);
    temp->val=x;
    temp->next=NULL;
    head=temp;
}
void InsertEnd(int x)
{
    ListNode* temp=new ListNode(0);
    temp->val=x;
    temp->next=NULL;

    ListNode* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void print()
{

    ListNode* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}
struct ListNode* solve(struct ListNode* A,int B)
{
     int cnt=0;
    struct ListNode* t;
    t=A;
    while(t!=NULL){
        cnt++;
        t=t->next;
    }
   // cout<<cnt<<endl;
    int r=B%cnt;
  //  cout<<r<<endl;
    if(r==0)return A;

  // cnt=r;
    t=A;
    int c=cnt-r;

    for(int i=1;i<=cnt-r;i++){
        if(i==c){

        }
        else
        t=t->next;
    }
  //  cout<<t->data<<endl;
    ListNode* t1=t->next;
    ListNode* tmp=t1;
    //cout<<t1->data<<endl;
    t->next=NULL;
    while(t1->next!=NULL){
          //  cout<<t1->data<<endl;
        t1=t1->next;
    }
    //cout<<t1->data<<endl;
    t1->next=A;
    return tmp;
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
            //print();
    int B;
    cin>>B;
    head=solve(head,B);
     print();
}
