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
int n;
int dp[mx][mx],arr[mx][mx];
int func(int i,int j)
{
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==n) return 0;
    if(j==0){
        int ret1=func(i+1,j+1)+arr[i][j];
        int ret2=func(i+1,j+2)+arr[i][j];
        int ret=min(ret1,ret2);
        dp[i][j]=ret;
    }
    if(j==1){
        int ret1=func(i+1,j+1)+arr[i][j];
        int ret2=func(i+1,j-1)+arr[i][j];
        int ret=min(ret1,ret2);
        dp[i][j]=ret;
    } if(j==2){
        int ret1=func(i+1,j-1)+arr[i][j];
        int ret2=func(i+1,j-2)+arr[i][j];
        int ret=min(ret1,ret2);
        dp[i][j]=ret;
    }
    return dp[i][j];
}
int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d",&n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            sc("%d",&arr[i][j]);
        }
    }
    int mn=INT_MAX;
    int f1=func(0,0);
    mn=min(mn,f1);
    int f2=func(0,1);
    mn=min(mn,f2);
    int f3=func(0,2);
    mn=min(mn,f3);
    pr("Case %d: %d\n",++te,mn);
    }
}

