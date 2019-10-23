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
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 100005
VI G[mx];
ll  vis[mx];
ll  color[mx];
ll  arr[mx];

void BFS(ll  source)
{
    queue<ll>q;
    vis[source]=1;
    color[source]=1;
    q.push(source);
    while(!q.empty())
    {
        ll  u=q.front();
        q.pop();
        for(ll  i=0; i<G[u].size(); i++)
        {
            ll  v=G[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                color[v]=3-color[u];
                q.push(v);
            }
        }
    }
}
int main()
{
     FILE
    ll  N,i,s,test,m=0;
    sc("%lld",&test);
    while(test--)
    {
        FOR(i,0,mx)
        {
            G[i].clear();
        }

        sc("%lld",&N);
        ll  cnt[10000]= {0};
        memset(arr,0,sizeof(arr));
        ll  k=0;
        FOR(i,0,N-1)
        {
            ll  x,y;
            sc("%lld%lld",&x,&y);
            cnt[x]++;
            cnt[y]++;
            if(cnt[x]==1)
                arr[k++]=x;
            if(cnt[y]==1)
                arr[k++]=y;
            G[x].push_back(y);
            G[y].push_back(x);
        }/*
        for(i=0;i<78;i++){
                cout<<i<<":";
            for(int j=0;j<G[i].size();j++){
                cout<<G[i][j]<<" ";
            }
            cout<<endl;
        }*/
        memset(vis,0,sizeof(vis));
        memset(color,0,sizeof(color));
        for(i=0; i<k; i++)
        {
            if(vis[arr[i]]==0)
                BFS(arr[i]);
        }
        ll  odd=0,even=0;
        for(i=1; i<=mx; i++)
        {
            if(color[i]==1)
            {

                odd++;
            }
            else if(color[i]==2)
                even++;
        }
        pr("Case %lld: %lld\n",++m,max(odd,even));
    }
}

