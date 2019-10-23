ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* t=A;
    while(t->next!=NULL){
        ListNode* p=t->next;
        if(p->val==t->val){
            t->next=p->next;
        }
        else{
            t=t->next;
        }
    }
    return A;
}
