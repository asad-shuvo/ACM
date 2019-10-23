#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    int node;
    if(n==1)
        printf("1\n");
    if(n==2){
        printf("4\n");
    }
        if(n>2){
        node=4;
    for(int i=3;i<=n;i++)
        node=node*2+4;
        printf("%d\n",node);
        }

}}
