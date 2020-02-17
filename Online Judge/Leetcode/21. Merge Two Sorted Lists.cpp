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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode* head=NULL;
        if(l1->val<l2->val){
            head=l1;
            l1=l1->next;
        }
        else{
            head=l2;
            l2=l2->next;
        }
        
        ListNode* tmp=head;
        while(l1!=NULL and l2!=NULL){
            if(l1->val<l2->val){
                tmp->next=l1;
                l1=l1->next;
                tmp=tmp->next;
            }
            else{ 
                tmp->next=l2;
                l2=l2->next;
                 tmp=tmp->next;
            }
        }
        if(l1){
            tmp->next=l1;
        }
        if(l2){
            tmp->next=l2;
        }
        return head;
    }
};
