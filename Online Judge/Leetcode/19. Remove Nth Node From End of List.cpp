/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            tmp=tmp->next;
            cnt++;
        }
        cnt=cnt-n+1;
        if(cnt==1){head=head->next;return head;}
        ListNode* t1=head;
        for(int i=1;i<=cnt-2;i++){
            t1=t1->next;
        }
        t1->next=t1->next->next;
        return head;
    }
};
