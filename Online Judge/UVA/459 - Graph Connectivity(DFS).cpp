#include <bits/stdc++.h>
using namespace std;
vector<int>G[1000];
int vis[10000];
int dfs(int x){
    vis[x]=1;
    for(int i=0;i<G[x].size();i++){
        if(vis[G[x][i]]==0){
            dfs(G[x][i]);
        }
    }
}
int main()
{
        int test,m=0;
        scanf("%d\n\n",&test);

      //  getchar();
        while(test--){
                m++;
        if(m>1)
            cout<<endl;
                for(int i=0;i<=100;i++)
                G[i].clear(),vis[i]=0;
    char a[1000];
    gets(a);

    int i,j,k,l,m,n;
    k=a[0]-'A';
    while(gets(a) && a[0]){
        int x=a[0]-'A';
        int y=a[1]-'A';
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
}
