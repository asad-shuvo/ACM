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
#define mx 105
VI G[mx];
VI ans;
int vis[mx];
int dis[mx];
int sdis[mx];
int vis2[mx];

void BFS(int source){
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    queue<int>q;
    q.push(source);
    dis[source]=0;
    vis[source]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(vis[v]==0){
                vis[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}

int BFS2(int source,int destination)
{
     memset(vis2,0,sizeof(vis2));
    memset(sdis,0,sizeof(sdis));
    queue<int>q1;
    vis2[source]=1;
    q1.push(source);
    sdis[source]=0;
    while(!q1.empty())
    {
        int u=q1.front();
        q1.pop();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
          //  if(v==destination){
            //    return sdis[v];
            //}
            if(vis2[v]==0){
                vis2[v]=1;
                sdis[v]=sdis[u]+1;
                               // cout<<v<<endl;
                                //cout<<sdis[v]<<endl;

                q1.push(v);
            }
        }
    }
}
int main()
{
    int N,R,test,m=0;
    sc("%d",&test);
    while(test--){

    sc("%d%d",&N,&R);
    while(R--){
        int x,y;
        sc("%d%d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int source,destination;
    sc("%d%d",&source,&destination);
    BFS(source);
    for(int i=0;i<N;i++){
        BFS2(i,destination);
        int p=sdis[destination]+dis[i];
        ans.push_back(p);
    }
   // for(int i=0;i<ans.size();i++)
     //   cout<<ans[i]<<" ";
  //  cout<<dis[destination]<<endl;
  sort(ans.begin(),ans.end());
  pr("Case %d: ",++m);
  cout<<ans[ans.size()-1]<<endl;
  for(int i=0;i<=N;i++)
    G[i].clear();
  ans.clear();
    }
}
