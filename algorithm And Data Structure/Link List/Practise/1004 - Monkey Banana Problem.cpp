#include <bits/stdc++.h>
using namespace std;
int N;
#define sc scanf
#define ll long long
int dp[200][100];
int bound[200];
int mat[200][200];
ll func(int i,int j)
{
	if(i>=1&&i<=((2*N)-1)&&j>=1&&j<=bound[i])
    {
      //  cout<<"1"<<endl;
        if(dp[i][j]!=-1) return dp[i][j];
        ll ret=-1;
        ret=max(ret,func(i+1,j)+mat[i][j]);
        if(i<N)
        ret=max(ret,func(i+1,j+1)+mat[i][j]);
        else
        ret=max(ret,func(i+1,j-1)+mat[i][j]);
        dp[i][j]=ret;
        return dp[i][j];
    }
    else
        return 0;
}
int main()
{
ll test,te=0;
    sc("%lld",&test);
    while(test--){
    ll var=1;

    sc("%lld",&N);
    for(ll i=1;i<=(2*N)-1;i++){
            bound[i]=var;
        for(ll j=1;j<=var;j++){
            sc("%lld",&mat[i][j]);
        }
    if(i<N) var++;
    else
        var--;
    }
memset(dp,-1,sizeof(dp));
ll res=func(1,1);
    printf("Case %lld: %lld\n",++te,res);
}
}
