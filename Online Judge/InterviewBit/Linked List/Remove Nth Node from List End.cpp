/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   int cnt=0;
   ListNode* tmp=A;
   while(tmp){
       cnt++;
       tmp=tmp->next;
   }
   if(B>cnt)return A->next;
   int z=cnt-B;
   if(z==0)return A->next;
   ListNode* t=A;
   for(int i=1;i<z;i++){
       t=t->next;
   }
   t->next=t->next->next;
   return A;
}

