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
int dp[6][8000];
int coin[5]={50,25,10,5,1};
int func(int i,int make)
{
    if(make==0) return 1;
    if(make<0) return 0;
    if(i>=5) return 0;
    if(dp[i][make]!=-1)
        return dp[i][make];
            int p1=0;
    int p2=0;

    p1=func(i,make-coin[i]);
    p2=func(i+1,make);
     dp[i][make]=p1+p2;
     return dp[i][make];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int make;
    while(sc("%d",&make)!=EOF){
            int t=func(0,make);
        pr("%d\n",t);
    }
}

