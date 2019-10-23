#include <bits/stdc++.h>
using namespace std;
    vector<int>G[100];
int BFS(int n,int src)
{
    queue<int>q;
    int taken[100]={0},distance[100];
    q.push(src);
    int p,v;
    distance[src]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<G[u].size();i++)
        {
             v=G[u][i];
            if(taken[v]!=1){
                distance[v]=distance[u]+1;
                taken[v]=1;
                q.push(v);
            }
        }
        p=distance[v];
        q.pop();
    }
    return p;
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    }
    cout<<BFS(node,1);
}
