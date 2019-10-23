#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
#define module 100000007
ll arr[105],n,k;
ll func()
{
    ll table[k+1][n];
    memset(table,0,sizeof(table));
    for(ll i=0;i<n;i++)
        table[0][i]=1;
    for(ll i=1;i<=k;i++){
     for(ll j=0;j<n;j++){
            ll x=0,y=0;
        if(i>=arr[j])  x=table[i-arr[j]][j];
        if(j>=1)  y=table[i][j-1];
        table[i][j]=(x+y)%100000007;
     }
    }
    return table[k][n-1];
}
int main()
{
    ll i,j,l,m,test,te=0;
    sc("%lld",&test);
    while(test--){
    sc("%lld%lld",&n,&k);
    //ll arr[105];
    FOR(i,0,n-1){
    sc("%lld",&arr[i]);
    }
    pr("Case %lld: %lld\n",++te,func());
    }
    //cout<<t;
}

