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
    ListNode* removeElements(ListNode* head, int val) {
       if(head==NULL)return NULL;
       
        while(head->val==val ){
            if(head->next==NULL)return NULL;
            head=head->next;
        }
        
         ListNode* tmp=head;
        while(tmp!=NULL and tmp->next!=NULL){
            if(tmp->next->val==val){
                tmp->next=tmp->next->next;
            }
            if(tmp->next==NULL)break;
            if(tmp->next->val!=val)tmp=tmp->next;
        }
        return head;
        
    }
};
