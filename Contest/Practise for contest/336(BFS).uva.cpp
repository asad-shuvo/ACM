#include<bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
#define mx 200000
vector<int>G[mx];
int visit[mx];
set<int>s;
set<int>::iterator it;
int  BFS(int source,int des)
{
    queue<int>q;
    int take=1;
    q.push(source);
    int distance[mx];
    distance[source]=0;
    visit[source]=1;
    while(!q.empty())
    {
        int u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visit[v]==0)
            {
                visit[v]=1;
                distance[v]=distance[u]+1;
                //cout<<distance[v];
                if(distance[v]<=des){
                       // cout<<distance[v];
                    take++;
                    q.push(v);
                }
                  //  else
                     //   return take;

            }
        }
    }
    return take;
}
int main()
{
   // f_i
    //f_o
    int n,te=0;
    while(scanf("%d",&n)!=EOF && n>0){
    while(n--){
int x,y;


          //  memset(G, 0 ,sizeof(G));
    scanf("%d%d",&x,&y);
    s.insert(x);
    s.insert(y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int sr,d;
    while(scanf("%d%d",&sr,&d)==2)
    {
        if(sr==0 && d==0)
            break;
        memset(visit, 0 ,sizeof(visit));
       // take=0;
       int bs=s.size()-BFS(sr,d);
       it=s.find(sr);
    if(it!=s.end())
    {
        bs=bs;
    }
    else
        bs=bs+1;
       printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++te,bs,sr,d);
        //cout<<s.size()-BFS(sr,d)<<endl;
     //   cout<<take;
  //  cout<<s.size()-take<<endl;
    }
     memset(G, 0 ,sizeof(G));
     s.clear();
    }
}
