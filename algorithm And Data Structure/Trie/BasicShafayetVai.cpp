#include <bits/stdc++.h>
using namespace std;
struct node{
    bool endmark;
    node *next[26+1];
    node(){
    endmark=false;
    for(int i=0;i<26;i++)
        next[i]=NULL;
    }
}*root;
void Insert(char *str, int len)
{
    node *curr=root;
    for(int i=0;i<len;i++){
        int id=str[i]-'a';
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->endmark=1;
}
int Search(char *str, int len)
{
    node *curr=root;
    for(int i=0;i<len;i++){
        int id=str[i]-'a';
        if(curr->next[id]==NULL)
            return false;
        curr=curr->next[id];
    }
    return curr->endmark;
}
int main()
{
    int n,m;
    root=new node();
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char str[20];
        scanf("%s",str);
        Insert(str,strlen(str));
    }
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        char str2[20];
        scanf("%s",str2);
        cout<<Search(str2,strlen(str2))<<endl;
    }
}
