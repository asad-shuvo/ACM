#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[1000];
int vis[1000];
int bfs(int N,int source){
    queue<int>Q;
    vis[source]=1;
    Q.push(source);
    while(!Q.empty()){
            int u=Q.front();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
}
int main()
{
 //   f_i
   // f_o
    char a[1000],b[1000],test,te=0;
    scanf("%d\n\n",&test);
    while(test--){
             for(int i=0;i<=100;i++){
        G[i].clear(),vis[i]=0;
    }
            te++;
    if(te>1)
        cout<<endl;
    int i,j,k,l,m,n,N,E;
    gets(a);
    N=a[0]-'A';
    while(gets(b) && b[0]){
        m=b[0]-'A';
        n=b[1]-'A';
        G[m].push_back(n);
        G[n].push_back(m);
    }
int    cnt=0;
    for(i=1;i<=N;i++){
        if(vis[i]==0)
        {
            cnt++;
            bfs(N,i);
        }
    }
    cout<<cnt<<endl;
    }
}
