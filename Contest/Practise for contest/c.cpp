#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,arr[100005],q,test,te=0;
    scanf("%lld",&test);
    while(test--){
            printf("Case %lld:\n",++te);
    scanf("%lld%lld",&n,&q);
    for(ll i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    while(q--){
    ll d,l,r,c,cnt=0,val,total=0;
    scanf("%lld%lld%lld%lld",&c,&l,&r,&d);
    d=d%1000000007;
    if(l>r)swap(l,r);
     for(ll i=l;i<=r;i++){
         val=(cnt*d+1)%1000000007;
        val=(val*arr[i])%1000000007;
        total+=val;
        total=total%1000000007;
        cnt++;
    }
    printf("%lld\n",total);
    }
    }
}
