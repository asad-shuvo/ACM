#include <bits/stdc++.h>
using namespace std;
vector<int>G[1000];
vector<int>v1,v2;
int vis[1000];
int bfs(int N , int source){
    v1.push_back(source);
    for(int loop=1;loop<=N;loop++){
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
        else{
            v1.clear();
            v1=v2;
            v2.clear();
        }
    }
}
int main()
{
    int m=0,n,i,j,k,l,test;
    scanf("%d\n\n",&test);
    while(test--){
        for(i=0;i<=100;i++)
            G[i].clear(),vis[i]=0;
    m++;
    if(m>1)
        cout<<endl;
    char str[100];
    gets(str);
    //getchar();
    n=str[0]-'A';
    while(gets(str) && str[0]){
        int x=str[0]-'A';
        int y=str[1]-'A';
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int cnt=0;
    for(i=0;i<=n;i++){
        if(vis[i]==0){
            cnt++;
            bfs(n,i);
        }
    }
    cout<<cnt<<endl;
}
return 0;
}
