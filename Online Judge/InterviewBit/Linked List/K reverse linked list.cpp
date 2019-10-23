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
    ListNode *current,*prev,*N,*temp,*t1,*t2,*fsp;
    temp=A;
    current=A;
    prev=NULL;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int cn=0;
    current=A;
    prev=NULL;
    t1=A;
    fsp=NULL;
    for(int i=1;i<=cnt;i++){

    N=current->next;
    current->next=prev;

    prev=current;
    current=N;
    if((i)%B==0){
        if(cn==0){
            t2=prev;
            //cout<<t2->val<<endl;
            cn++;
            fsp=t1;
            prev=NULL;
            t1=current;
        }
        else{
            fsp->next=prev;
            fsp=t1;
            prev=NULL;
            t1=current;
        }
        //prev->next=fsp;



        //cout<<t1->val<<endl;
    }
    }
 //   cout<<t2->val<<endl;
    return t2;
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
    int B,C;
    cin>>B;
    head=solve(head,B);
     print();
}

