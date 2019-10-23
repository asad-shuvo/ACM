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
#define mx 1010
int dp[105][50010];
int n,arr[mx],total_sum;
int dif;
void func(int pos,int sum)
{
    int t=total_sum-sum;
    dif=min(dif,abs(sum-t));
    if(pos==n) return;


    if(dp[pos][sum]!=-1)
    {
        dif=min(dif,dp[pos][sum]);
        return;
    }
    func(pos+1,sum+arr[pos]);
    func(pos+1,sum);
    dp[pos][sum]=dif;
}
int main()
{
    int test;
    sc("%d",&test);
    while(test--){
    sc("%d",&n);
    total_sum=0;
    memset(dp,-1,sizeof(dp));
    dif=INT_MAX/3;
    for(int i=0;i<n;i++)
    {
        sc("%d",&arr[i]);
        total_sum+=arr[i];
    }
    func(0,0);
    cout<<dif<<endl;
    }
}

