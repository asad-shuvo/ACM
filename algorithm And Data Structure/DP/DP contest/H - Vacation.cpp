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
#define mx 1005
char A[mx],B[mx];
int lenA,lenB;
bool vis[mx][mx];
int dp[mx][mx];
int LCS(int i,int j)
{
    if(A[i]=='\0' or B[j]=='\0') return 0;
    if(vis[i][j]) return dp[i][j];
    int ret=0;
    if(A[i]==B[j]){
        ret=1+LCS(i+1,j+1);
        dp[i][j]=ret;

    }
    else{
                    int ret2=LCS(i+1,j);

        int ret1=LCS(i,j+1);
        ret=max(ret1,ret2);
        dp[i][j]=ret;
    }
    vis[i][j]=1;
    return dp[i][j];
}
int main()
{
   // FILE
    int i,j,k,l,m,n,te=0;
    while(gets(A)){
            if(A[0]=='#') break;
    gets(B);
   // while(sc("%s%s",A,B)!=EOF){
    lenA=strlen(A);
    lenB=strlen(B);
    memset(dp,-1,sizeof(dp));
    memset(vis,0,sizeof(vis));
    pr("Case #%d: you can visit at most %d cities.\n",++te,LCS(0,0));
    }
}
