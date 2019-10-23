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
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
int dp[6][100005],taken,n=5;
int coin[]={1,5,10,25,50};
int fun(int i,int make)
{
    if(i>=n){
        if(make==0)return 1;
        else return 0;
    }
    if(dp[i][make]!=-1)return dp[i][make];
    int p1=0,p2=0;
    if(make-coin[i]>=0)p1=fun(i,make-coin[i]);
    p2=fun(i+1,make);
    return dp[i][make]=p1+p2;
}
int main()
{
    mem(dp,-1);
    while(sc("%d",&taken)!=EOF)
    {
        cout<<fun(0,taken)<<endl;
    }
}

