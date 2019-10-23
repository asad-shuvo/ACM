#include <bits/stdc++.h>
using namespace std;
vector<int>G[100005];
vector<int>v1,v2;
int vis[100005];
int n;
int bfs(int source){
    vis[source]=1;
    v1.push_back(source);
    for(int loop=0;loop<=n;loop++){
        for(int i=0;i<v1.size();i++){
            int u=v1[i];
            for(int j=0;j<G[u].size();j++){
                int v=G[u][j];
                if(vis[v]==0){
                        vis[v]=1;
                    v2.push_back(v);
                }
            }
        }
        if(v2.empty()){
            v1.clear();
            v2.clear();
            break;
        }
        else
        {
            v1.clear();
            v1=v2;
            v2.clear();
        }
    }
}
int main()
{
    int i,j,k,l,m;
    int test;
    cin>>test;
    while(test--){
    cin>>n>>m>>l;
    memset(vis , 0 ,sizeof(vis));
    for(i=0;i<=n;i++){
        G[i].clear();
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    }
    while(l--){
        cin>>k;
        bfs(k);
    }
    int cnt=0;
    for(i=1;i<=n;i++){
        if(vis[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
    }

}
