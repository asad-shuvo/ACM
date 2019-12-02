/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if(head==NULL)return 0;
   Node* s=head;
    Node* f=head;
    s=s->next;
    f=f->next->next;
    int fl=0;
    while(s and f and f->next){
        if(s==f){
            fl=1;
            break;
        }
        s=s->next;
        f=f->next->next;
    }
    return fl;
    
}
