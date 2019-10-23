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
void mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    int cnt=0;
     int s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n-1)break;
        }
    }
    if(cnt==n-1)pr("%d\n",s);
    else pr("Impossible\n");
}
int main()
{
    //FILE
    int n,m;
    while(sc("%d%d",&n,&m)){
            if(n==0 && m==0)break;
            e.clear();
    map<string,int>mp;
    for(int i=1;i<=n;i++){
        string A;
        cin>>A;
        mp[A]=i;
    }
    for(int i=1;i<=m;i++){
        string A,B;
        int w;
        cin>>A>>B>>w;
        int u=mp[A];
        int v=mp[B];
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    string S;
    cin>>S;
     mst(n);
}
}

