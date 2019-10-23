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
int dp[1005][1005];
int lps(char *str,int i,int j)
{
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(str[i]==str[j] && i+1==j)
        return 2;
    if(str[i]==str[j])
        return dp[i][j]=lps(str,i+1,j-1)+2;
    return dp[i][j]=max(lps(str,i,j-1),lps(str,i+1,j));
}
int main()
{
    int test;
    sc("%d",&test);
    getchar();
    while(test--){
    char seq[1005];
    gets(seq);
   // sc("%s",seq);
   memset(dp,-1,sizeof(dp));
    int n=strlen(seq);
    pr("%d\n",lps(seq,0,n-1));
}
}

