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
    int u,v,w;
    bool operator < (const edge& p)const
    {
        return w<p.w;
    }
};
int ret,air;
vector<edge>e;
int par[10005];
int find(int r)
{
    return (par[r]==r) ? r:find(par[r]);
}
ll mst(int n,int cost)
{
    sort(e.begin(),e.end());
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    int cnt=0;
    ll s=0,l=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
            if(e[i].w>=cost){s+=cost;l++;}
            else{
            s+=e[i].w;
            }
            //cout<<e[i].w<<endl;
            if(cnt==n-1)break;
        }
    }
    if(l==0 && cnt==n-1){
        ret=1;
    }
air=l;
    ret=cnt;
    //cout<<ret<<endl;
    return s;
}
int main()
{
    int n,m,cost,test,te=0;
    sc1(test);
    while(test--){
            e.clear();
    sc3(n,m,cost);
    for(int i=1;i<=m;i++){
        int u,v,w;
        sc3(u,v,w);
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    ret=0,air=0;
    //cout<<ret<<endl;
    ll r=mst(n,cost);
    ll r1=(n)-ret;
   // cout<<r<<" "<<r1;
    ll netcosta=r1*cost+r;
    pr("Case %d: %lld %lld\n",++te,netcosta,r1+air);
}


}
