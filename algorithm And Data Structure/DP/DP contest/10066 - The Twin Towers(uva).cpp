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
int arr1[mx];int arr2[mx];
bool visited[mx][mx];
int dp[mx][mx];
int m,n;
int LCS(int i,int j)
{
    if(i==m or j==n)
        return 0;
    if(visited[i][j]) return dp[i][j];
    int ret=0;
    if(arr1[i]==arr2[j]){
        ret=1+LCS(i+1,j+1);
        dp[i][j]=ret;
    }
    else{
        int ret1=LCS(i+1,j);
        int ret2=LCS(i,j+1);
        ret=max(ret1,ret2);
        dp[i][j]=ret;
    }
    visited[i][j]=1;
    return dp[i][j];
}
int main()
{
    int i,j,k,l,te=0,test=0;
    while(sc("%d%d",&m,&n)&& m>0 && n>0){

    pr("Twin Towers #%d\n",++te);
    FOR(i,0,m-1)
    sc("%d",&arr1[i]);
    FOR(i,0,n-1)
    sc("%d",&arr2[i]);
    memset(dp,-1,sizeof(dp));
    memset(visited,0,sizeof(visited));
    pr("Number of Tiles : %d\n\n",LCS(0,0));
    }
}

