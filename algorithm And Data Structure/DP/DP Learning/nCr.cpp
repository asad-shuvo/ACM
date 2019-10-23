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
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
int dp[200][200];
int nCr(int n,int r)
{
    if(n==r)return 1;
    if(r==1)return n;
    if(dp[n][r]!=-1)return dp[n][r];
    return dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
}
int main()
{
    int n,r;
    sc("%d%d",&n,&r);
    memset(dp,-1,sizeof(dp));
    cout<<nCr(n,r)<<endl;
}

