#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 10005
VI G[mx];
int vis1[mx],vis2[mx];
stack<int>stk;
void init()
{
    int i;
    FOR(i,0,mx)
    {
        G[i].clear();
        vis1[i]=0;
        vis2[i]=0;
    }
}
void dfs1(int u)
{
    vis1[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis1[v]==0)
            dfs1(v);
    }
    //cout<<u<<endl;
   stk.push(u);
}
void dfs2(int u)
{
    vis2[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis2[v]==0)
            dfs2(v);
    }
}
int main()
{
    int N,M,test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d%d",&N,&M);
        init();

    while(M--)
    {
        int a,b;
        sc("%d%d",&a,&b);
        G[a].p_b(b);
    }
    int i;
    FOR(i,1,N)
    {
        if(vis1[i]==0){
            dfs1(i);
        }
    }
    int cnt=0;
    while(!stk.empty())
    {

        int T=stk.top();
        stk.pop();
        if(vis2[T]==0)
        {
            cnt++;
            dfs2(T);
        }
    }

    pr("Case %d: %d\n",++te,cnt);
}
}

