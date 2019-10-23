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
    bool operator < (const edge& p)const{
    return w<p.w;
    }
};
#define M 1005
vector<edge>e;
ll par[M];
ll find(ll r)
{
    return (par[r]==r) ? r:find(par[r]);
}
vector<ll>vd;
void mst(ll n)
{
    sort(e.begin(),e.end());
    int f=0;
    for(int i=0;i<n;i++)par[i]=i;
    for(int i=0;i<(int)e.size();i++){
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            par[u]=v;
        }
        else{
                int t=e[i].w;
     vd.p_b(t);
     f=1;
        }
    }
    if(f==1){
    sort(vd.begin(),vd.end());
    cout<<vd[0];
    for(int i=1;i<vd.size();i++)
        cout<<" "<<vd[i];

        cout<<endl;
    }
    else
        pr("forest\n");
//    return s;
}
int main()
{
    ll i,n,m;
    while(sc("%lld%lld",&n,&m)&&n>0 && m>0){
 ll sum=0;
 e.clear();
 vd.clear();
    F(i,1,m){
    ll u,v,w;
    sc("%lld%lld%lld",&u,&v,&w);
    sum+=w;
    edge get;
    get.u=u;
    get.v=v;
    get.w=w;
    e.p_b(get);
    }
    mst(n);
}

}

