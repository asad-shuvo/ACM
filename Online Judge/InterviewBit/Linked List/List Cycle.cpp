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
struct ListNode* solve(struct ListNode* A)
{
    ListNode *prev,*temp,*head;
   if(!A)return NULL;
   ListNode *slow,*fast;
   slow=A;
   fast=A;
   slow=slow->next;
   fast=fast->next->next;
   while(fast and fast->next and slow){
        if(fast==slow)break;
        slow=slow->next;
        fast=fast->next->next;
   }
   if(slow!=fast)return NULL;
   slow=A;
   while(slow!=fast){
    slow=slow->next;
    fast=fast->next;
   }
   return slow;
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
     print();
}


