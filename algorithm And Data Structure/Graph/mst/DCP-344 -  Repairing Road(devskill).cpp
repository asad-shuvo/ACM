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
    ll u,v,w;
    bool operator < (const edge& p)const
    {
        return w>p.w;
    }
};
vector<edge>e;
ll par[Mx];
ll find(ll r)
{
    return (par[r]==r) ? r:find(par[r]);
}
ll  mst(ll  n)
{
    sort(e.begin(),e.end());
    for(ll  i=0;i<=n;i++){
        par[i]=i;
    }
    ll  cnt=0,s=0;
    for(ll  i=0;i<(ll )e.size();i++)
    {
        ll  u=find(e[i].u);
        ll  v=find(e[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n-1)break;
        }
    }
    return s;
}
int main()
{
    ll  n,m,test,te=0;
    sc("%lld",&test);
    while(test--){
            e.clear();
    sc("%lld%lld",&n,&m);
    for(ll  i=1;i<=m;i++){
        ll  u,v,w;
        sc("%lld%lld%lld",&u,&v,&w);
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    pr("Case %lld: %lld %lld\n",++te,n-1,mst(n));
}

}
