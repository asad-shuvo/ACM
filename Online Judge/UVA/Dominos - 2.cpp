#include <bits/stdc++.h>
using namespace std;
int cnt;
vector<int>G[10000];
int vis[10000];
int dfs(int l){
    vis[l]=1;
    int i,j,k;
    for(i=0;i<G[l].size();i++){
        if(vis[G[l][i]]==0){
                cnt++;
        vis[G[l][i]]=1;
            dfs(i);
        }
    }
}
int main()
{

    int test;
    scanf("%d",&test);
    while(test--){
    memset(vis, 0 ,sizeof(vis));
    int i,j,k,l,n,m;
    scanf("%d%d%d",&n,&m,&l);

     int x,y;
    for(i=0;i<m;i++){

        scanf("%d%d",&x,&y);
    G[x].push_back(y);
    }
    cnt=0;

    for(i=0;i<l;i++){
        scanf("%d",&k);
        if(vis[k]==0){
                cnt++;
                dfs(k);
        }

    }
    cout<<cnt<<endl;;
    for(i=0;i<=n;i++)
        G[i].clear();
}
}
