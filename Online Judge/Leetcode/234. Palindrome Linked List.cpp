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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return true;
        int cnt=0;
        ListNode* tmp=head;
        while(tmp){
            cnt++;
            if(tmp->next==NULL)break;
            tmp=tmp->next;
            // head=head
        }
        if(cnt==1)return true;
        int mid=cnt/2;
        ListNode* rev;
        ListNode* t1;
        ListNode* t2;
        rev=NULL;
        int m;
         if(cnt%2==1){
           m=mid+2;
       }
        else m=mid+1;
        t2=head;
        for(int i=1;i<m;i++){
            t2=t2->next;
        }
        tmp=head;
        for(int i=1;i<mid;i++){
            t1=tmp->next;
            tmp->next=rev;
            rev=tmp;
            tmp=t1;
        }
     
        tmp->next=rev;
        cout<<cnt<<endl;
        // while(t2){
        //     cout<<t2->val<<endl;
        //     if(t2->next==NULL)break;
        //     t2=t2->next;
        // }
        //   while(tmp){
        //     cout<<tmp->val<<endl;
        //     if(tmp->next==NULL)break;
        //       tmp=tmp->next;
        // }
         int f=1;
        while(t2){
            if(t2->val!=tmp->val)f=0;
            
            if(tmp->next==NULL or t2->next==NULL)break;
            t2=t2->next;
            tmp=tmp->next;
        }
         
      
       return f;
        
    }
};
