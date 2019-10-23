
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
    ll n,k,i,val,cnt=0;
    sc("%lld%lld",&n,&k);
    FOR(i,0,n-1){
    sc("%lld",&val);
    if(val%k==0) cnt+=(val/k);
    else
        cnt+=(val/k)+1;
    }
    if(cnt%2==0) cout<<cnt/2<<endl;
    else
        cout<<cnt/2+1<<endl;

}
