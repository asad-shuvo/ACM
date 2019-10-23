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

void print(struct ListNode* head)
{

    ListNode* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}
struct ListNode* solve(struct ListNode* A)
{
    if(!A or !A->next)return A;
    ListNode *slow=A,*fast=A;
    while(fast->next and fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
  //  cout<<slow->val<<endl;
  fast=slow->next;
  ListNode *prev=slow,*current=fast,*N;
 // slow->next=NULL;
  //current=A;
  while(current->next){
    N=current->next;
    current->next=N->next;
    N->next=prev->next;
    prev->next=N;

  }
ListNode *mid=prev;
 ListNode *p1 = A, *p2 = mid->next;
    while(p1 != mid)
    {
        mid->next = p2->next;
        p2->next = p1->next;
        p1->next = p2;
        p1 = p2->next;
        p2 = mid->next;
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

    head=solve(head);
     print(head);
}


