#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define inf 100000000
#define pr printf
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
    ll  n,arr[100005],i,j,k,q,test;
    sc("%lld",&test);
    while(test--){
    sc("%lld%lld",&n,&q);
    FOR(i,0,n-1){
    sc("%lld",&arr[i]);
    }
    ll sum[350];
    FOR(i,0,230){
        ll mx=-1;
    FOR(j,0,n-1){
        ll s;
    s=i & arr[j];
    if(s>mx)
        mx=s;
    }
    sum[i]=mx;
    }
    while(q--){
        ll  a;
        sc("%lld",&a);
        pr("%lld\n",sum[a]);
    }
    }
}
