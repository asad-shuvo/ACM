#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* head;
ListNode* head1;

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
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void print(struct ListNode* head)
{

    ListNode* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}
void FirstElement1(int x)
{
    ListNode* temp=new ListNode(0);
    temp->val=x;
    temp->next=NULL;
    head1=temp;
}
void InsertEnd1(int x)
{
    ListNode* temp=new ListNode(0);
    temp->val=x;
    temp->next=NULL;

    ListNode* temp1=head1;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void print1()
{

    ListNode* temp;
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}
struct ListNode* solve(struct ListNode* A,struct ListNode* B)
{
    if(!A)return B;
    if(!B)return A;

    int carry=0;
    int sum=0;
    sum=A->val+B->val+carry;
    ListNode* newHead=new ListNode(sum%10);
    carry=sum/10;
    A=A->next;
    B=B->next;
    ListNode* newHeadP=newHead;
    while(A||B||carry){
        sum=(A?A->val:0)+(B?B->val:0)+carry;
        ListNode* temp=new ListNode(sum%10);
        carry=sum/10;
        newHead->next=temp;
        newHead=newHead->next;
        if(A)A=A->next;
        if(B)B=B->next;
    }
    return newHeadP;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=1; i<=n1; i++)
    {
        int x;
        cin>>x;
        if(i==1)
        {
            FirstElement(x);
            continue;
        }
        InsertEnd(x);
    }
    for(int i=1; i<=n2; i++)
    {
        int x;
        cin>>x;
        if(i==1)
        {
            FirstElement1(x);
            continue;
        }
        InsertEnd1(x);
    }
    //   print(head);
    //    cout<<endl;
    // print1();

    head=solve(head,head1);
    print(head);
}

