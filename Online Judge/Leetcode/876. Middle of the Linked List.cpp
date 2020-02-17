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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=NULL){cnt++;tmp=tmp->next;}
        cnt=cnt/2;
        cnt++;
         ListNode* t=head;
        for(int i=1;i<cnt;i++){
           // if(t!=NULL)
            t=t->next;
        }
       // cout<<t->val<<endl;
        return t;
    }
};
