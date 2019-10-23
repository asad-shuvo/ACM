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
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--){
    ll n,dec,cnt=0;
    sc("%lld",&dec);
    while(dec){
        if(dec%2==1)cnt++;
        dec/=2;
    }
    if(cnt%2==1)pr("Case %d: odd\n",++te);
        else
        pr("Case %d: even\n",++te);
}
}

