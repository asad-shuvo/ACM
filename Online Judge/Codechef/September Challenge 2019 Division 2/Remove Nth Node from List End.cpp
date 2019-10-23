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
    ListNode* temp=A;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int c=cnt-B;
    if(cnt<B or c==0){
        ListNode* t=A;
        A=t->next;
        free(t);
        return A;
    }
   // cnt-=B;
   ListNode* t=A;
    for(int i=1;i<c;i++){
        t=t->next;
    }
    temp=t->next;
    t->next=temp->next;
    free(temp);
    return A;
}
