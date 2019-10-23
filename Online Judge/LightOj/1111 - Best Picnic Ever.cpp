#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10005],ans;
int vis[10005];
map<int,int>mp;
void dfs(int n)
{
    if(vis[n]==1)
        return;
    vis[n]=1;
    ans.push_back(n);
    for(int i=0;i<vec[n].size();i++){
        dfs(vec[n][i]);
    }
}
int main()
{
    int K,N,M,i,j,t,arr[200],te=0,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d%d",&K,&N,&M);
    for(i=0;i<K;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<M;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        vec[u].push_back(v);
    }
    for(i=0;i<K;i++){
        mp[arr[i]]++;
         ans.clear();
         memset(vis, 0 ,sizeof(vis));
    vis[arr[i]]=1;
    for(j=0;j<vec[arr[i]].size();j++){
        //int v=vec[arr[i]][j];
        if(vis[vec[arr[i]][j]]==0){
            dfs(vec[arr[i]][j]);
        }
    }
    for(int l=0;l<ans.size();l++){
        mp[ans[l]]++;
    }
    }
    int co=0;
    for(i=1;i<=N;i++){
        if(mp[i]==K){
            co++;
        }
    }
    printf("Case %d: %d\n",++te,co);
    for(i=0;i<=N;i++){
        vec[i].clear();
    }
    mp.clear();
    }
}
