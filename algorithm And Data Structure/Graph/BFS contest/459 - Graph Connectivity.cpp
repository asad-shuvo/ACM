#include <bits/stdc++.h>
using namespace std;
vector<int>G[1000];
int vis[1000];
int dfs(int x){
    vis[x]=1;
    for(int i=0;i<G[x].size();i++){
        if(vis[G[x][i]]==0){
            vis[G[x][i]]=1;
            dfs(G[x][i]);
        }
    }
}
int main()
{
    string b,c;
    char a[1000];
    int x,y,i,j,k,l;
    gets(a);
    k=a[0]-'A';
    //G[k].push_back(k);
    memset(vis , 0 ,sizeof(vis));
    while(gets(a) && a[0]){
        x=a[0]-'A';
        y=a[1]-'A';
        G[x].push_back(y);
        G[y].push_back(x);
    }
   int cnt=0;
    for(i=0;i<=k;i++){
        if(vis[i]==0){
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt<<endl;
}
