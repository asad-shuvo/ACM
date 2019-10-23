#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,k,n,m;
    while(scanf("%lld%lld",&n,&m)!=EOF){
            if(n==0 && m==0)
            break;
    if(m>(n/2)){
        m=n-m;
    }
    ll ans=1;
    for(i=0;i<m;i++)
    {
        ans*=(n-i);
        ans/=(i+1);
    }
    printf("%lld\n",ans);
    }
}
