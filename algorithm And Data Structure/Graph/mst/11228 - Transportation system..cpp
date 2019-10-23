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
struct edge{
    int u,v;
    dd w;
    bool operator < (const edge& p)const
    {
        return w<p.w;
    }
};
dd cost;
vector<edge>e;
int par[100005];
int find(int r)
{
    return (par[r]==r) ? r:find(par[r]);
}
void mst(int n)
{
    dd rail=0,road=0,l=0;
    sort(e.begin(),e.end());
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    dd cnt=0,s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
           // cout<<e[i].w<<endl;
            if(e[i].w>cost){rail+=e[i].w;l++;}
            else
                road+=e[i].w;
            s+=e[i].w;
            if(cnt==n-1)break;
        }
    }
    int state=l+1;
 //   int rl=rail;
   // int rd=road;
    pr("%d %.0lf %.0lf\n",state,road,rail);
}
int main()
{
    //FILE
    int n,test,te=0;
    sc1(test);
    while(test--){
            e.clear();
    sc("%d%lf",&n,&cost);
   double x[1005],y[1005];
    for(int i=1;i<=n;i++){
        sc("%lf%lf",&x[i],&y[i]);
    }
 for(int  i=1;i<=n;i++){
            for(int  j=i+1;j<=n;j++){
                dd temp=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
                edge get;
                get.u=i;
                get.v=j;
                get.w=temp;
                e.p_b(get);
            }
    }
    pr("Case #%d: ",++te);
    mst(n);
    //cout<<mst(n)<<endl;
}
}

