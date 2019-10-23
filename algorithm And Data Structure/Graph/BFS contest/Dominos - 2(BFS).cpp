#include <bits/stdc++.h>
using namespace std;
vector<int>G[100005];
int vis[100005];
int cnt=0,n;
vector<int>v1,v2;
int bfs(int source){

    v1.push_back(source);
       vis[source]=1;
        for(int loop=0;loop<=n;loop++){
            for(int i=0;i<v1.size();i++){
                int u=v1[i];
                for(int j=0;j<G[u].size();j++){
                    int v=G[u][j];
                    if(vis[v]==0){
                           // cnt++;
                        vis[v]=1;
                        v2.push_back(v);
                    }
                }
            }
          //  vis[source]=1;
            if(v2.empty()){
                    v1.clear();
                    v2.clear();
                break;
            }
            else{
                v1.clear();
                v1=v2;
                v2.clear();
            }
        }
}
int main()
{
    int m,l,x,y,k;
    int test;
    cin>>test;
    while(test--){
    scanf("%d%d%d",&n,&m,&l);
    memset(vis , 0 ,sizeof(vis));
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
    while(m--){
        cin>>x>>y;
        G[x].push_back(y);
    }
    while(l--){
        scanf("%d",&k);
        bfs(k);
    }
    cnt=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}
