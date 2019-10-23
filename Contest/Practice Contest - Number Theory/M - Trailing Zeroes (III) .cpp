#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 50000000000010
ll  trail(ll n){
    ll cnt=0;
    for(ll i=5;n/i>=1;i=i*5){
        cnt+=(n/i);
    }
    return cnt;
}
int main()
{
    ll test,m=0;
    scanf("%lld",&test);
    while(test--){
    ll start=1,endd=mx,mid;
    ll n;
    ll take=0;
    scanf("%lld",&n);
     while(start<=endd)
    {
//printf("start= %lld  End= %lld   Mid=%lld \n",start,endd,mid);
//        getchar();
        mid=(start+endd)/2;
        ll z=trail(mid);
        if(z==n)
        {
            take=mid;
            break;
        }
        else if(z>n)
        {
            endd=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    ll take1=take%5;
    take=take-take1;
    if(take==0)
         printf("Case %lld: impossible\n",++m);
    else
    printf("Case %lld: %lld\n",++m,take);
    }
}

