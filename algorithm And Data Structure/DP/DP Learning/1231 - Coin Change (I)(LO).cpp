#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005

/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
int coin[1005],state[1005],n;
ll dp[55][21][1005];
ll fun(int i,int make,int st)
{
    if(make==0)return 1;
    if(make<0)return 0;

    if(i>=n)
        return 0;
    if(dp[i][make][st]!=-1)return dp[i][make][st];
    ll p1=0,p2=0;
        if(st<=state[i]){
            p1=fun(i,make-coin[i],st+1);
        }
    p2=fun(i+1,make,1);
   return dp[i][make][st]=(p1+p2)%100000007;
}
int main()
{
    int test,i,te=0;
    sc("%d",&test);
    while(test--){
            int make;
    sc("%d%d",&n,&make);
    F(i,0,n-1)sc("%d",&coin[i]);
    F(i,0,n-1)sc("%d",&state[i]);
    mem(dp,-1);
    pr("Case %d: %lld\n",++te,fun(0,make,1));
}
}
