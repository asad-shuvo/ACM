#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,k,p,test,i=0;
    scanf("%d",&test);
    while(test--){
            i++;
    scanf("%d%d",&n,&m);
    if(n<=m){
        t=m*4+19;
    }
    else
    {
        p=(n-m)+n;
        t=p*4+19;
    }
    printf("Case %d: %d\n",i,t);
    }
    return 0;
}
