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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode *current=head,*N,*prev=NULL;
        while(current!=NULL){
            N=current->next;
            current->next=prev;
            prev=current;
            current=N;
        }
        return prev;
    }
    
};
