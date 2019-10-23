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
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int value[32767+5],dp[32767+5];
int k;
vector<int>v;
int longest(int u){
    if(dp[u]!=-1)return dp[u];
    int maxi=0;
    for(int i=u+1;i<v.size();i++){
        if(v[i]<=v[u]){
            if(longest(i)>maxi)maxi=longest(i);
        }
    }
    return dp[u]=maxi+1;
}
int main()
{
 //   FILE
    int m,te=0,tem=0;

    while(sc1(m)){
            v.clear();
            if(m==-1)break;
    v.p_b(m);
            k=0;
            tem++;
    k++;
    if(tem>1)cout<<endl;
            pr("Test #%d:\n",++te);
    memset(dp,-1,sizeof(dp));
    int n;
     mem(value,0);
    while(sc1(n)){
        if(n==-1)break;
            v.p_b(n);
    }
    int LIS=0;
//cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
    if(longest(i)>LIS)LIS=longest(i);
    }
    pr("  maximum possible interceptions: %d\n",LIS);
}
}

