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
ll dp[55][21][1001];
int use[1000],coin[1000];
int n;
ll func(int pos,int state,int make)
{
    if(make==0) return 1;
    if(make<0) return 0;
    if(pos>=n) return 0;
    if(dp[pos][state][make]!=-1) return dp[pos][state][make];
    ll p1=0,p2=0;
    if(state<=use[pos])
        p1=func(pos,state+1,make-coin[pos]);

        p2=func(pos+1,1,make);

        dp[pos][state][make]=(p1+p2)%100000007;
        return dp[pos][state][make];
}
int main()
{
    int i,j,k,l,m,test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d%d",&n,&k);
   // int coin[10000],use[10000];
    FOR(i,0,n-1){
    sc("%d",&coin[i]);
    }
    FOR(i,0,n-1)
    sc("%d",&use[i]);
        memset(dp,-1,sizeof(dp));

    pr("Case %d: %lld\n",++te,func(0,1,k));
}
}

