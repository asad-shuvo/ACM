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
    ListNode *t1,*t2,*t3,*head;
    t1=A;
    int cnt=0;
    while(t1!=NULL){
        cnt++;
        t1=t1->next;
    }
  //  cout<<cnt<<endl;
    if(cnt==1)return A;
    head=A->next;
    t1=A;
    ListNode *current,*prev,*N;
    current=A;
    prev=A;
     cnt=0;
    while(current!=NULL){
            if(current->next==NULL)break;
        if(current->next){

        N=current->next;
        if(N->next){
                if(cnt==0){

            current->next=N->next;
            t3=N->next;
        N->next=current;
        prev=current;
    current=t3;}
    else{
        prev->next=N;
        t3=N->next;
        N->next=current;
        current->next=t3;prev=current;
        current=t3;
    }
    cnt++;
   // cout<<prev->val<<" "<<current->val<<endl;
        }
        else{
           // N=current->next;
            prev->next=N;
            N->next=current;
            current->next=NULL;
            break;
        }
    }
    }
    return head;
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

    head=solve(head);
     print();
}

