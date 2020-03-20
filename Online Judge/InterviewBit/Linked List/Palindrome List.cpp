/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode* temp=new ListNode(0);
    temp=A;
    
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int TT=cnt;
    int nc;
    if(cnt%2==0){
        cnt/=2;
        nc=cnt+1;
    }
    else{
        cnt/=2;
        nc=cnt+2;
    }
  //  cnt/=2;
    int flg=1;
    temp=A;
    for(int i=1;i<nc;i++){
        temp=temp->next;
    }
    ListNode *current,*prev,*N;
    current=temp;
    prev=NULL;
    while(current!=NULL){
        N=current->next;
        current->next=prev;
        prev=current;
        current=N;
    }
    for(int i=1;i<=cnt;i++){
        if(A->val!=prev->val){
             flg=0;
            return flg;
        }
        else{
            A=A->next;
            prev=prev->next;
        }
    }
    return flg;
}

