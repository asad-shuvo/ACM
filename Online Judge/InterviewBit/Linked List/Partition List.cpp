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
    ListNode *current,*prev,*N,*temp,*t1,*t2,*fsp,*c1,*c2;
    temp=A;
    c1=NULL;
    c2=NULL;
    while(temp){
        if(temp->val<B){
            if(c1==NULL){
                c1=new ListNode(temp->val);
                t1=c1;
            }
            else{
                t1->next=new ListNode(temp->val);
                t1=t1->next;
            }
        }
        else{
            if(c2==NULL){
                c2=new ListNode(temp->val);
                t2=c2;
            }
            else{
                t2->next=new ListNode(temp->val);
                t2=t2->next;
            }
        }
        temp=temp->next;
    }

    if(c1==NULL)return c2;
    t1->next=c2;
    return c1;

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

