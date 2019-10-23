#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    int i,j,k,l,m,n,a,rem;
    while(scanf("%d",&n)!=EOF){
            if(n==0)
            break;
    for(i=n+1;i<(n+n);i++)
    {
        a=i;
            rem=a/10;
        if(i-rem==n)
            printf("%d ",i);
    }
    printf("\n");
}
return 0;
}
