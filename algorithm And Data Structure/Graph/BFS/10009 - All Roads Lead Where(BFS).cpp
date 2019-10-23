#include<bits/stdc++.h>
using namespace std;
#define mx 200000
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[mx];
vector<int>ant;
int visit[mx], parent[mx];
void BFS(int source,int destination)
{
    queue<int>q;
    q.push(source);
    int v;
    visit[source]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            v=G[u][i];
            if(visit[v]==0)
            {
                parent[v]=u;
                visit[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    // f_i
    //f_o
    int edge,node,q;
    int test,m=0;
    cin>>test;
    while(test--)
    {
        m++;
        if(m>1)
            cout<<endl;
        for(int i=0; i<=mx; i++)
            G[i].clear();
        scanf("%d%d",&edge,&q);
        while(edge--)
        {
            string a1,a2;
            cin>>a1>>a2;
            int x,y;
            x=a1[0]-'A'+1;
            y=a2[0]-'A'+1;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        while(q--)
        {
                memset(visit,0,sizeof(visit));
                memset(parent,0,sizeof(parent));

            string a3,a4;
            cin>>a3>>a4;
            int x1,y1;
            x1=a3[0]-'A'+1;
            y1=a4[0]-'A'+1;
            BFS(x1,y1);
            int t1=y1;
            ant.push_back(y1);
            while(parent[t1]!=x1)
            {
                t1=parent[t1];
                ant.push_back(t1);
            }
            ant.push_back(x1);


            for(int i=ant.size()-1; i>=0; i--)
            {
                int k2=ant[i];
                printf("%c",k2+64);
            }
            cout<<endl;
            ant.clear();
        }


    }
}
