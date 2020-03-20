/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL)return A;
 ListNode* head=new ListNode(0);
 head->next=A;
 ListNode* curr=head;
 while(curr->next!=NULL and curr->next->next!=NULL){
     if(curr->next->val==curr->next->next->val){
         int v=curr->next->val;
         while(curr->next and curr->next->val==v){
             curr->next=curr->next->next;
         }
     }
     else{
         curr=curr->next;
     }
 }
 return head->next;
}

