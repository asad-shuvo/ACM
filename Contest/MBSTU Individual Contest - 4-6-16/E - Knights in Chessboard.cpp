#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,p,k,l,m,n;
    scanf("%lld",&t);
    i=0;
    while(t--){
            i++;
    scanf("%lld%lld",&n,&m);
    p=n*m;
    if(p%2==1)
    printf("Case %lld: %lld\n",i,p/2+1);
    else
    printf("Case %lld: %lld\n",i,p/2);
    }
    return 0;
}
