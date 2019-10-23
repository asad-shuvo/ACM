#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
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
vector<edge>e;
    vector<edge>temp;
int par[mx];
int find(int r)
{
    return (par[r]==r) ? r:find(par[r]);
}
int tex;
vector<int>vc;
int mst(int n)
{
            sort(e.begin(),e.end());
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    int cnt=0,s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
                //v.push_back(i);
            par[u]=v;
            cnt++;
            s+=e[i].w;
                        vc.p_b(i);

            if(cnt==n-1)break;
        }
    }
    if(cnt!=n-1)s=inf;
    return s;
}
//int best;

int secondBmst(int n){
                sort(temp.begin(),temp.end());
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    int cnt=0,s=0;
    for(int i=0;i<(int)temp.size();i++)
    {
        int u=find(temp[i].u);
        int v=find(temp[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
            s+=temp[i].w;
            if(cnt==n-1)break;
        }
    }
    if(cnt!=n-1)s=inf;
    return s;
}
int main()
{
    FILE
    int n,m,test,te=0;
    sc1(test);
    while(test--){
            e.clear();
    temp.clear();
    vc.clear();
    sc("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    int best=inf;
    int ret1=mst(n);
    int ret2;
//cout<<vc.size()<<endl;
            if(ret1!=inf){
        for(int i=0;i<vc.size();i++){
                        temp=e;
                int tem=vc[i];
        //cout<<tem<<endl;
                temp.erase(temp.begin()+tem);
                int ret=secondBmst(n);
            if(ret<best)best=ret;
        }
            }
        if(best==inf && ret1!=inf)pr("Case #%d : No second way\n",++te);
        if(best==inf && ret1==inf)pr("Case #%d : No way\n",++te);
        if(best<inf)pr("Case #%d : %d\n",++te,best);
}
}


