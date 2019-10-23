#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define VI vector<int>
int main()
{
//    FILE
    ll test,te=0;
    sc("%lld",&test);
    while(test--){

    ll n,k[55],p[55];
    ll i,j,l,m;
    sc("%lld",&n);
    FOR(i,0,n-1){
    sc("%lld%lld",&k[i],&p[i]);
    }
    ll mx=-1;
    FOR(i,0,n-1){
        ll s=0;
    FOR(j,0,n-1){
    if(p[i]<=p[j]){
        s+=k[j]*p[i];
    }
    }
    if(s>mx)
        mx=s;
    }
    pr("Case %lld: %lld\n",++te,mx);
    }
}

