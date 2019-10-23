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
int dp[2005][2005];
    string A,B;
int lena,lenb,M;
//int les=INT_MAX;
int itp(int i,int j)

{
    if(i==0)return j;
    if(j==0)return i;
     //if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
   if(A[i-1]==B[j-1])return dp[i][j]=itp(i-1,j-1);
   dp[i][j]=min(itp(i-1,j)+1,itp(i,j-1)+1);
   dp[i][j]=min(dp[i][j],itp(i-1,j-1)+1);
   return dp[i][j];
}
int main()
{
    int test;
    sc("%d",&test);
    while(test--){
    cin>>A>>B;
    lena=A.size();
    lenb=B.size();
    //M=max(lena,lenb);
    memset(dp,-1,sizeof(dp));
    cout<<itp(lena,lenb)<<endl;
}
}

