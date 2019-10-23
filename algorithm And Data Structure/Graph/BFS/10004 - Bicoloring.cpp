#include <bits/stdc++.h>
using namespace std;
#define mx 200
vector<int>G[mx];
int vis[mx],N,E,color[mx],flag=1;
void bfs(int source){
    queue<int>Q;
    Q.push(source);
    vis[source]=1;
    while(!Q.empty()){
            int u=Q.front();
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
    if(vis[v]==0){
            vis[v]=1;
        if(color[u]==1){
            color[v]=2;
        }
        else if(color[u]==2){
            color[v]=1;
        }
    }
    if(color[u]==color[v]){
            flag=0;
        return;
    }
    }
    Q.pop();
    }
}
int main()
{
    int i,j,k;
    while(cin>>N>>E){
    while(E--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
//    memset()
    int res;
    for(i=0;i<N;i++){
        bfs(i);
        color[i]=1;
    }
    if(flag==1)
        cout<<"BICOLORABLE."<<endl;
    else
        cout<<"NOT BICOLORABLE."<<endl;

}
}
