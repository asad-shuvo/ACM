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
ListNode* merge(ListNode* A,ListNode* B){
    if(A == NULL){
        return B;
    }
    if(B == NULL){
        return A;
    }

    ListNode* head = NULL;

    if(A->val < B->val){
        head = A;
        A = A->next;
    }
    else{
        head = B;
        B = B->next;
    }

    ListNode* temp = head;

    while(A != NULL && B != NULL){
        if(A->val < B->val){
            temp->next = A;
            A = A->next;
        }
        else{
            temp->next = B;
            B = B->next;
        }
        temp = temp->next;
    }

    if(A != NULL){
        temp->next = A;
    }
    else{
        temp->next = B;
    }

    return head;
}
struct ListNode* sortList(struct ListNode* A)
{
     ListNode* head = A;

    if(head == NULL || head->next == NULL){
        return head;
    }

    ListNode* start = A;
    ListNode* end = A->next;

    while(end != NULL && end->next != NULL){
        start = start->next;
        end = (end->next)->next;
    }

    end = start->next;
    start->next = NULL;

    return merge(sortList(head), sortList(end));
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

    head=sortList(head);
     print();
}


