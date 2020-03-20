/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
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
  
return A;
}

