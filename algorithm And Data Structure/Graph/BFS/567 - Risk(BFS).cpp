#include <bits/stdc++.h>
using namespace std;
#define mx 21
vector<int>G[mx];
int visit[mx];
int BFS(int source,int destination)
{
    queue<int>q;
    int trans[mx],p,f=0,v;
    q.push(source);
    visit[source]=1,trans[source]=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++)
        {
             v=G[u][i];
            if(visit[v]!=1){
                trans[v]=trans[u]+1;
                p=trans[v];
              //  cout<<trans[v]<<endl;
                if(v==destination)
                {
                   return p;

                }
                visit[v]=1;
                q.push(v);
            }
        }

    }

    return p;
}
int main()
{
    int x,t=0;
            int y,k=0;

    while(scanf("%d",&x)!=EOF){
            for(int i=0;i<mx;i++)
            G[i].clear();
                    while(x--){
            scanf("%d",&y);
            G[1].push_back(y);
            G[y].push_back(1);
        }

    for(int i=2;i<=19;i++)
    {
        scanf("%d",&x);
        while(x--){
            scanf("%d",&y);
            G[i].push_back(y);
            G[y].push_back(i);
        }
    }
   int q;
   scanf("%d",&q);
       printf("Test Set #%d\n",++t);

   while(q--){
   int x,y;
   for(int i=0;i<=20;i++)
   {

       visit[i]=0;
   }
   scanf("%d%d",&x,&y);

   printf("%2d to %2d: %d\n",x,y,BFS(x,y));

   }
   printf("\n");
}
}
