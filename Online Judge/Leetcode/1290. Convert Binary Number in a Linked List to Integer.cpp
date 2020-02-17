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
    int getDecimalValue(ListNode* head) {
        int decimal=0;
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        ListNode* t=head;
        cnt--;
        while(t!=NULL){
            decimal+=((1<<cnt) * (t->val));
            cnt--;
            t=t->next;
        }
        return decimal;
    }
};
