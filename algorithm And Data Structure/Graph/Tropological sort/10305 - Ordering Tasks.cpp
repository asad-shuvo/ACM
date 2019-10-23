#include <bits/stdc++.h>
using namespace std;
#define mx 200
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[mx];
int main()
{
    //f_i
    //f_o
    vector<int>G[mx];
    int ans[mx],indegree[mx];
            int m,n;

    while(scanf("%d%d",&m,&n)!=EOF && m>0 && n>0){
    memset(indegree, 0 ,sizeof(indegree));
    for(int i=0;i<=mx;i++)
        G[i].clear();

    while(n--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        indegree[y]++;
    }
    queue<int>q;
    for(int i=1;i<=m;i++)
    {
        if(indegree[i]==0)
            q.push(i);
    }
    int j=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        ans[j++]=u;
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            indegree[v]--;
            if(indegree[v]==0)
                q.push(v);
        }
    }
    for(int i=0;i<j-1;i++){
        printf("%d ",ans[i]);
    }
    printf("%d",ans[j-1]);
    cout<<endl;
    }
}
