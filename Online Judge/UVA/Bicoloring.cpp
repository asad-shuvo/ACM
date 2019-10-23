#include <bits/stdc++.h>
using namespace std;
int G[200][200];
int vis[200],n;
int dfs(int i){
    vis[i]=1;
    for(int j=0;j<G[i].size();j++){
        if(!vis[j]){
            dfs(j);
        }
    }
}
int main()
{
    cin>>n,x1,x2;
    for(i=0;i<n;i++){
        vis[i]=0;
    }
    for(int i=0;i<n;i++){
        for(j=0;j<1;j++){
            scanf("%d",&G[i][j]);
        }

}
for(int i=0;i<n;i++){
    for(int j=0;j<1;j++){
        dfs()
    }
}
    dfs(0);
}
