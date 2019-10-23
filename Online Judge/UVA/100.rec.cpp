#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==1)
        return 1;
    if(n%2==1)
        return 1+rec(3*n+1);
    else if(n%2==0)
        return 1+rec(n/2);
}
int main()
{
    int n,m,k=0,i;

    while(scanf("%d%d",&n,&m)!=EOF && n>0 && m>0)
    {
        printf("%d %d ",n,m);
        if(n>m)
            swap(n,m);
        int p;
        int mx=0;
        for(i=n; i<=m; i++)
        {
            p=rec(i);
            if(p>mx)
                mx=p;
        }
        printf("%d\n",mx);
    }
}
