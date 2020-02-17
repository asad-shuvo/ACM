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
    bool hasCycle(ListNode *head) {
        ListNode* frst=head;
        ListNode* scnd=head;
        while(frst and scnd and scnd->next){
            frst=frst->next;
            scnd=scnd->next->next;
            if(frst==scnd)return 1;
        }
        return 0;
    }
};
