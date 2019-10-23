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

vector<edge>e;
int par[mx];
int find(int r)
{
    return (par[r]==r) ? r:find(par[r]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    //reverse(e.begin(),e.end());
    for(int i=0;i<=n;i++){
        par[i]=i;
    }
    int cnt=0,s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n)break;
        }
    }
    return s;
}
int mst1(int n)
{
    sort(e.begin(),e.end());
    reverse(e.begin(),e.end());
    for(int i=0;i<=n;i++){
        par[i]=i;
    }
    int cnt=0,s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n)break;
        }
    }
    return s;
}
int main()
{
    int u,v,w,test,te=0;
    sc1(test);
    while(test--){
            e.clear();
    int n,m;
    sc("%d",&n);
    while(sc3(u,v,w)){
        if(u==0 && v==0 && w==0)break;
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    int t1=mst(n);
    int t2=mst1(n);
    pr("Case %d: ",++te);
    if((t1+t2)%2==0)pr("%d\n",(t1+t2)/2);
    else
        pr("%d/2\n",t1+t2);
    //cout<<t1<<" "<<t2<<endl;
}
}

