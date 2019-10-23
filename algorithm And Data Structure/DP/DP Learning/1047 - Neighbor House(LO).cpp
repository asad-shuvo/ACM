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
int dp[mx][mx],arr[mx][mx],n;
int fun(int i,int j)
{
    if(i==n+1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(j==1){
        int f1=arr[i][j]+fun(i+1,j+1);
        int f2=arr[i][j]+fun(i+1,j+2);
        return dp[i][j]=min(f1,f2);
    }
     if(j==2){
        int f1=arr[i][j]+fun(i+1,j-1);
        int f2=arr[i][j]+fun(i+1,j+1);
        return dp[i][j]=min(f1,f2);
    } if(j==3){
        int f1=arr[i][j]+fun(i+1,j-1);
        int f2=arr[i][j]+fun(i+1,j-2);
        return dp[i][j]=min(f1,f2);
    }
}
int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--)
    {
    mem(dp,-1);
    sc("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++)sc("%d",&arr[i][j]);
    }

    int f1=fun(1,1);
  //  cout<<f1<<endl;
    int f2=fun(1,2);
    //cout<<f2<<endl;
    int Mn=min(f1,f2);
    int f3=fun(1,3);
    //cout<<f3<<endl;
    Mn=min(f3,Mn);
    pr("Case %d: %d\n",++te,Mn);
}
}
