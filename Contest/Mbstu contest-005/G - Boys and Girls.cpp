#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("input.txt","w",stdout);
    int n,m,i,j,k,l,t;
    scanf("%d%d",&n,&m);
    if(m>n){
        for(i=1;i<=n;i++){
            printf("G");
            printf("B");
        }
        for(j=n;j<m;j++){
            printf("G");
        }
        printf("\n");
    }
    if(m==n){
        for(i=1;i<=n;i++){
            printf("G");
            printf("B");
        }
        printf("\n");
    }
    if(n>m){
        for(i=1;i<=m;i++){
            printf("B");
            printf("G");
        }
        for(i=m;i<n;i++){
            printf("B");
        }
        printf("\n");
    }
}
