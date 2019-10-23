#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
   //freopen("output.txt","w",stdout);
    int i,j,k,l,m,n,p=0;
    while((scanf("%d%d",&n,&m))!=EOF){
        p++;
    if(n<m){
        if(p>1)
            printf("\n");
        for(i=n+1;i<=m+1;i++){
            printf("%d\n",i);
        }
        //printf("%d\n",m+1);
    }
    else if(n>m){
        if(p>1)
            printf("\n");
        for(i=m+1;i<=n+1;i++){
            printf("%d\n",i);
        }
        //printf("%d\n",n+1);
    }
    else if(n==m){
        if(p>1)
            printf("\n");
        printf("%d\n",n+1);
    }
   // printf("\n");
    }
    return 0;
}
