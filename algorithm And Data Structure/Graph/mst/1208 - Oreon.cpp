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
int par[100005];
int find(int r)
{
    return (par[r]==r) ? r:find(par[r]);
}
vector<int>v1,v2,cost;
void mst(int n)
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
                if(e[i].u<e[i].v){
                v1.p_b(e[i].u);
                v2.p_b(e[i].v);
                }
                else {
                v1.p_b(e[i].v);
                v2.p_b(e[i].u);
                }
                cost.p_b(e[i].w);
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n-1)break;
        }
    }

}
int main()
{
    int n,m,test,te=0;
    sc1(test);
    while(test--){
            e.clear();
    v1.clear();
    v2.clear();
    cost.clear();
    sc("%d",&n);
        pr("Case %d:\n",++te);
    getchar();
    for(int i=1;i<=n;i++){
                    string A;
            getline(cin,A);
            for(int k=0;k<A.size();k++){
                if(A[k]==',')A[k]=' ';
            }
            stringstream ss(A);
            int d;
            int cnt=1;
            while(ss>>d){
                            edge get;
                int u=i;
                int v=cnt;
        get.u=u;
        get.v=v;
        get.w=d;
            if(d>0)
        e.push_back(get);
cnt++;
            }

            }
    mst(n);
    for(int i=0;i<v1.size();i++){
        int t1=v1[i];
    int t2=v2[i];
    char C1,C2;
    C1='A'+t1-1;
    C2='A'+t2-1;
            pr("%c-%c %d\n",C1,C2,cost[i]);
        //cout<<v1[i]<<" "<<v2[i]<<" "<<cost[i]<<endl;
    }
}
}

