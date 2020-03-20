/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL)return B;
    if(B==NULL)return A;
   ListNode* head=new ListNode(0);
   ListNode* tmp=head;
   while(A and B){
       if(A->val<B->val){
           tmp->next=A;
           A=A->next;
       }
       else {tmp->next=B;B=B->next;}
       tmp=tmp->next;
       
   }
   while(A){
       tmp->next=A;
        A=A->next;
       tmp=tmp->next;
   }
   while(B){
       tmp->next=B;
       B=B->next;
       tmp=tmp->next;
   }
   return head->next;
    
}

