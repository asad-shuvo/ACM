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
#define mx 205
#define inf 1 << 28
ll mat[mx][mx],bound[mx];
ll dp[mx][mx],N;
ll func(ll i,ll j)
{
    if(i>=1&&i<=((2*N)-1)&&j>=1&&j<=bound[i])
    {
      //  cout<<"1"<<endl;
        if(dp[i][j]!=-1) return dp[i][j];
        ll ret=-inf;
        ret=max(ret,func(i+1,j)+mat[i][j]);
        if(i<N)
        ret=max(ret,func(i+1,j+1)+mat[i][j]);
        else
        ret=max(ret,func(i+1,j-1)+mat[i][j]);
        dp[i][j]=ret;
        return dp[i][j];
    }
    else
        return 0;
}
int main()
{
//    FILE
    ll test,te=0;
    sc("%lld",&test);
    while(test--){
    ll var=1;

    sc("%lld",&N);
    for(ll i=1;i<=(2*N)-1;i++){
            bound[i]=var;
        for(ll j=1;j<=var;j++){
            sc("%lld",&mat[i][j]);
        }
    if(i<N) var++;
    else
        var--;
    }
memset(dp,-1,sizeof(dp));
ll res=func(1,1);
    pr("Case %lld: %lld\n",++te,res);
}
}

