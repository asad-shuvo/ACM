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

int main()
{
    ll n,arr[100005],i,j;
    sc("%lld",&n);
    FOR(i,0,n-1){
    sc("%lld",&arr[i]);
    }
    FOR(i,0,n-2){
    arr[i]=abs(arr[i]-arr[i+1]);
    if(i%2==1) arr[i]*=-1;
    }
    ll MX=0;
    ll sum=0;
    FOR(i,0,n-2){
    sum+=arr[i];
    if(sum<0) sum=0;
    MX=max(MX,sum);
    }
    FOR(i,0,n-2){
    arr[i]*=(-1);
    }
     sum=0;
    FOR(i,0,n-2){
    sum+=arr[i];
    if(sum<0) sum=0;
    MX=max(MX,sum);
    }

cout<<MX<<endl;
}
