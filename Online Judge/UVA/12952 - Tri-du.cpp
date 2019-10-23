#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,sum,p;
    while(scanf("%d%d",&n,&m)!=EOF){
    if(n==m)
    {
        p=n;
    }
    else if(n!=m)
    {
        p=max(n,m);
        /*
        if(n>m)
            p=n;
        else
            p=m;
            */
    }
    printf("%d\n",p);
    }
    return 0;
}
