#include <bits/stdc++.h>
using namespace std;
#define mx 5000
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
int vis[mx];
vector<int>G[mx];
int  dis[mx];
void BFS(int source ,int destination)
{
    queue<int>q;
    q.push(source);
    vis[source]=1;

    dis[source]=0;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
                //if(v==destination)
                  //  return dis[v];
            }
        }
    }
    //return 0;
}
int main()
{
    //f_i
    //f_o
    int test;
    scanf("%d",&test);
    printf("SHIPPING ROUTES OUTPUT\n");
    int m=0;
    while(test--){

                cout<<endl;
    printf("DATA SET  %d\n\n",++m);
    int M,N,P;
    cin>>M>>N>>P;
    memset(G, 0 ,sizeof(G));
    while(M--)
    {
        string a;
        cin>>a;
    }
    while(N--)
    {
        string a,b;
        cin>>a>>b;
        int t=(a[0]-'A'+10);
    int t1=t%10;
    int t2=t/10;
    int tt=a[1]-'A'+10;
    int tt1=tt%10;
    int tt2=tt/10;
    int tak1=t2;
    tak1=tak1*10+t1;
    tak1=tak1*10+tt2;
    tak1=tak1*10+tt1;
  //  printf("%d\n",tak1);
    int tb=(b[0]-'A'+10);
    int tb1=tb%10;
    int tb2=tb/10;
    int ttb=b[1]-'A'+10;
    int ttb1=ttb%10;
    int ttb2=ttb/10;
    int tak2=tb2;
    tak2=tak2*10+tb1;
    tak2=tak2*10+ttb2;
    tak2=tak2*10+ttb1;
    //printf("%d\n",tak2);
    int x=tak1;
    int y=tak2;
      //  int x=(a[0]-'A'+10)*10+(a[1]-'A'+10);
        //int y=(b[0]-'A'+10)*10+(b[1]-'A'+10);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    while(P--)
    {
        int tk;
        cin>>tk;
        string a1,b1;
    cin>>a1>>b1;
      int t=(a1[0]-'A'+10);
    int t1=t%10;
    int t2=t/10;
    int tt=a1[1]-'A'+10;
    int tt1=tt%10;
    int tt2=tt/10;
    int tak1=t2;
    tak1=tak1*10+t1;
    tak1=tak1*10+tt2;
    tak1=tak1*10+tt1;
  //  printf("%d\n",tak1);
    int tb=(b1[0]-'A'+10);
    int tb1=tb%10;
    int tb2=tb/10;
    int ttb=b1[1]-'A'+10;
    int ttb1=ttb%10;
    int ttb2=ttb/10;
    int tak2=tb2;
    tak2=tak2*10+tb1;
    tak2=tak2*10+ttb2;
    tak2=tak2*10+ttb1;
    int x1=tak1;
    int y1=tak2;
        memset(vis, 0 ,sizeof(vis));
        memset(dis, 0 ,sizeof(dis));
    BFS(x1,y1);
    if(dis[y1]==0)
    printf("NO SHIPMENT POSSIBLE\n");
    else
        printf("$%d\n",dis[y1]*100*tk);
    }
    }
    printf("\n");
    printf("END OF OUTPUT\n");
}
