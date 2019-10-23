#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

struct node{
    bool endmark;
    node *next[11];
    node(){
    endmark=false;
    for(int i=0;i<11;i++)
        next[i]=NULL;
    }
}*root;

void insert(char *str,int len){
    node *curr=root;
    for(int i=0;i<len;i++){
        int id=str[i]-'0';
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->endmark=true;
}

bool search(char *str,int len)
{
    node *curr=root;
    int id;
    for(int i=0;i<len;i++){
         id=str[i]-'0';
       // if(curr->endmark==true) return false;
        curr=curr->next[id];
    }
    if(curr->next[id]==NULL)
    return true;
    else
        return false;

}

void del(node *cur)
{
    for(int i=0;i<26;i++)
        if(cur->next[i])
        del(cur->next[i]);

    delete(cur);
}
int main()
{
    pr("Enter Number Of Words:\n");
    root=new node();
    int num_word;
    sc("%d",&num_word);
    for(int i=1;i<=num_word;i++){
        char str[50];
        sc("%s",str);
        insert(str,strlen(str));
    }
    pr("Enter Number Of Query:\n");
    int query;
    sc("%d",&query);
    for(int i=1;i<=query;i++){
        char str[50];
        sc("%s",str);
        if(search(str,strlen(str))){
          pr("FOUND\n");
        } //
        else
            pr("NOT FOUND\n");
    }
    del(root);
}
