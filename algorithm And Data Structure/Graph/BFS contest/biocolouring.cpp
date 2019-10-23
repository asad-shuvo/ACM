#include <bits/stdc++.h>
using namespace std;
#define mx 205
vector<int>G[205];
int vis[205],colour[205];
int res;
void dfs(int x){
    vis[x]=1;
    for(int i=0;i<G[x].size();i++){
      int  k=G[x][i];
        if(vis[k]==0){
            if(colour[x]==1)
                colour[k]=2;
                else if(colour[x]==2)
                    colour[k]=1;
                    dfs(k);
        }
        if(colour[k]==colour[x])
        {
            res=0;
            return;
        }
    }
}
int main()
{
    int edge,node,i,j,k;
    while(scanf("%d%d",&edge,&node) && node){
            res=1;
    memset(vis , 0 ,sizeof(vis));
    while(node--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(i=1;i<=node;i++){
        if(vis[i]==0){
            colour[i]=1;
            dfs(i);
        }
    }
    if(res==1)
        cout<<"bicolourable"<<endl;
    else
        cout<<"Not biocolourable"<<endl;
        for(i=0;i<=node;i++)
            G[i].clear();
    }
}
