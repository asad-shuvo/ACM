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
struct ListNode* solve(struct ListNode* A,int B,int C)
{
    ListNode *t1,*t2,*temp;
    temp=A;

   for(int i=1;i<=C;i++){
        if(C==1){
            t2=A;
        }
    if(B==1){
        t1=A;
        temp=temp->next;
        continue;
    }
    else if(B>1){
        if(i+1==B){
            t1=temp;
        }
    }
    if(i+1==C){
        t2=temp;
    }
    temp=temp->next;
   }
   //cout<<t1->val<<" "<<t2->val<<endl;
   ListNode *t3,*t4,*curr,*N,*prev,*t5;
   t3=t1->next;
   t4=t2->next;
 //  t4->next=NULL;
   curr=t3;
   if(B==1)curr=A;
   prev=NULL;
   for(int i=B;i<=C;i++){
        N=curr->next;
        curr->next=prev;
        prev=curr;
        curr=N;
   }
   //cout<<curr->val<<endl;
  // cout<<prev->val<<endl;
   if(B==1){
  //  cout<<t1->val<<" "<<endl;
    t1->next=curr;
    return prev;
   }
   //cout<<curr->val<<endl;
   //cout<<t3->val<<" "<<prev->val<<endl;
   //cout<<t4->val<<" "<<endl;
//cout<<t1->val<<" "<<t3->val<<endl;

   t1->next=prev;
   t3->next=curr;
   if(B==1){
    head=t3;
   }
return A;
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
    int B,c;
    cin>>B>>c;
    head=solve(head,B,c);
     print();
}

