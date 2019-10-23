#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
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
int main()
{
    ll n;
    sc("%lld",&n);
    ll  node=n;
    ll  mat[105][105];
      for(ll  i=1;i<=n;i++){
        for(ll  j=1;j<=n;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }
    for(ll  i=1;i<node;i++){
        for(ll  j=1;j<=i;j++)
        {
            string a;
            cin>>a;
            if(a=="x")
                mat[i+1][j]=inf;
            else{
                ll  val=0;
                for(ll  t=0;t<a.size();t++){
                    val=val*10+a[t]-'0';
                }
                mat[i+1][j]=val;
                mat[j][i+1]=val;
            }

        }
    }
  for(ll  k=1;k<=node;k++){
        for(ll  i=1;i<=node;i++){
            for(ll  j=1;j<=node;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
    ll  mn=-1;
    for(ll  i=2;i<=node;i++)
    {
        mn=max(mat[1][i],mn);
    }
    cout<<mn<<endl;

}

