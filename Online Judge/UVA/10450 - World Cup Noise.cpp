#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define ll long long int
#define llu unsigned long long
#define file_input freopen("input.txt","rt",stdin);
#define file_output freopen("out.txt","wt",stdout);
ll Fib[52];
void fib()
{
    Fib[0]=1;
    Fib[1]=2;
    for(ll i=2;i<=51;i++){
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
}
int main()
{
///freopen("input.txt","rt",stdin);
   /// freopen("output.txt","wt",stdout);
    ll i,j,test,k,te=0;
    sf("%lld",&test);
    while(test--){
            sf("%lld",&k);
    fib();
    pf("Scenario #%lld:\n",++te);
    pf("%lld\n",Fib[k]);
    pf("\n");
}
}
