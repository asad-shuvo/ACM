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
#define F(i,a,b) for(i=a;i<=b;i++)
int dp[1005][1005],weight[1005],cost[1005],CAP,n;
int fun(int i,int w)
{
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int p1=0,p2=0;
    if(w+weight[i]<=CAP){
        p1=cost[i]+fun(i+1,w+weight[i]);
    }
    p2=fun(i+1,w);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}
int main()
{
    int i;
    sc("%d",&n);
    for(i=1;i<=n;i++){
    sc("%d%d",&cost[i],&weight[i]);
    }
    int G,sum=0;
    sc("%d",&G);
    while(G--)
    {
        int CAP;
        memset(dp,-1,sizeof(dp));
        sc("%d",&CAP);
        //cout<<fun(1,0)<<endl;
        sum+=(fun(1,0));
    }
    cout<<sum<<endl;
}

