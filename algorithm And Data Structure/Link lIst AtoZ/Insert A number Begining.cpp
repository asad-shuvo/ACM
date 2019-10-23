#include<stdlib.h>
#include<stdio.h>
struct node{
 int data;  //Declare for the data
 struct node* next; //declare for the address
};
struct node* head;

void Insert(int x){
    node* temp=(node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print()
{
    struct node* temp=head;
    printf("List: ");
    while(temp!=NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        Insert(x);
        print();
    }
}
