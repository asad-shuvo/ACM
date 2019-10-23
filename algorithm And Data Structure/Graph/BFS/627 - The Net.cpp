#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
#define mx 305
vector<int>G[mx];
vector<int>ant;
vector<char>tat1,tat2;
int visit[mx],parent[mx];
int BFS(int source,int destination)
{
    queue<int>q;
    q.push(source);
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
                parent[v]=u;
                if(v==destination)
                    return 1;
                q.push(v);
            }
        }
    }
    return 0;
}
int main()
{
//f_i
//f_o

int node;
while(scanf("%d",&node)!=EOF){
          memset(G, 0 ,sizeof(G));
          printf("-----\n");

while(node--){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]<'0' || a[i]>'9')
        a[i]=' ';
    }
    stringstream ss(a);
    int t;
    vector<int>v;
    while(ss>>t){
        v.push_back(t);
    }
    int x=v[0];
    for(int i=1;i<v.size();i++)
    {
        G[x].push_back(v[i]);
        //G[v[i]].push_back(x);
    }
   // cout<<a;
}
int q;
scanf("%d",&q);
while(q--){
        memset(visit, 0 ,sizeof(visit));
    memset(parent, 0 ,sizeof(parent));
    int x1,y1;
    scanf("%d%d",&x1,&y1);
     if(BFS(x1,y1)==0)
            printf("connection impossible\n");
        else{
        ant.push_back(y1);
        int tpr1=y1;
        while(parent[tpr1]!=x1)
        {
            tpr1=parent[tpr1];
            ant.push_back(tpr1);
        }
        ant.push_back(x1);
        for(int i=ant.size()-1;i>0;i--)
            cout<<ant[i]<<" ";

            cout<<ant[0];

cout<<endl;
        ant.clear();
}
}
}
}



