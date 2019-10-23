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
#define mxinf 100000000000
ll arr[1000000];
int main()
{
    ll n,i,j,k,l;
    map<int,int>mp;
    sc("%lld",&n);

    FOR(i,0,n-1){
    sc("%lld",&arr[i]);
    }
    sort(arr,arr+n);
ll    mx=mxinf;
    FOR(i,1,n-1){
    ll p=abs(arr[i]-arr[i-1]);
    if(p<=mx){
        mx=p;
        mp[mx]++;
    }
    }
    pr("%lld ",mx);
        cout<<mp[mx]<<endl;

}
