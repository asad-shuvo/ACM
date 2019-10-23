#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int dp[102][100005],weight[105];
int dp1[102][100005];
int n,cap,D,ans,tk=INT_MAX,J=INT_MAX,mn;
int fun(int i,int w,int coin)
{
    if(w>=cap)return w;
    if(i==n+1)return INT_MAX;
    if(dp[i][w]!=-1)return dp[i][w];
   // int p1=0,p2=0;
   dp[i][w]=0;
   dp[i][w]+=fun(i+1,w+weight[i],coin+1);
        //p1=fun(i+1,w+weight[i],coin+1);
    mn=min(mn,dp[i][w]);
    fun(i+1,w,coin);
    return mn;
    //return dp[i][w]=min(p1,p2);
}
int Coins(int ind, int coin, int tot){
    if(tot == ans)return coin;
    if(tot > ans)return INT_MAX;
    if(ind > n)return INT_MAX;
    if(dp1[ind][tot] != -1)return dp1[ind][tot];
    dp1[ind][tot] = 0;
    dp1[ind][tot] += Coins(ind+1, coin+1, tot+weight[ind]);
    mn = min(mn, dp1[ind][tot]);
    Coins(ind+1, coin, tot);
    return mn;
}
int main()
{
   FILE
    int test;
sc1(test);
while(test--){
    sc1(cap);
    sc1(n);
    mem(dp,-1);
    mem(dp1,-1);
    sort(weight, weight+n);
        reverse(weight, weight+n);
    mn=INT_MAX;
    for(int i=1;i<=n;i++)sc1(weight[i]);
    ans=fun(1,0,0);
    mn=INT_MAX;
   cout<<ans<<" "<<Coins(1,0,0)<<endl;
}
}
