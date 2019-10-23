#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head;
head=NULL;

void FirstElemtn(int x)
{
    node* temp=new node();


}

int main()
{
    int n;
    scanf("%d\n",n);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        InsertEnd(x);
        print();
    }
}
