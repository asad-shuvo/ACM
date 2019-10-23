#include<bits/stdc++.h>
using namespace std;
#define mx 200
vector<int>G[mx];
vector<int>ant[mx];
int visit[mx],t=0;
int BFS(int u,int destination)
{
    visit[u]=1;

        for(int i=0;i<G[u].size();i++)
        { t++;

            v=G[u][i];
         //   ant.push_back(v);
            if(visit[v]==0){
                 ant[].push_back(v);
                    if(v==destination){
                    for(int i=0;i<)
                    }
                visit[v]=1;
                dfs(v);
            }
        }
    }

}
int main()
{
    int edge,node,q;
    memset(visit, 0,sizeof(visit));
    scanf("%d%d",&edge,&q);
    while(edge--){
        string a1,a2;
        cin>>a1>>a2;
        int x,y;
        x=a1[0]-'A';
        y=a2[0]-'A';
        G[x].push_back(y);
        G[y].push_back(x);
    }
    while(q--)
    {
        for(int i=0;i<=mx;i++)
            visit[i]=0;
         string a3,a4;
        cin>>a3>>a4;
        int x1,y1;
        x1=a3[0]-'A';
        y1=a4[0]-'A';
        cout<<DFS(x1,y1);


    }
}

