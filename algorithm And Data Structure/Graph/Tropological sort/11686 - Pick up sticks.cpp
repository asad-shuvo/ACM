#include <bits/stdc++.h>
using namespace std;
#define mx 200
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[mx];
int main()
{
    f_i
    f_o
    vector<int>G[mx];
    int ans[mx],indegree[mx];

            int m,n;

    while(scanf("%d%d",&m,&n)!=EOF && m>0 && n>0){
    memset(indegree, 0 ,sizeof(indegree));
    memset(G, 0 ,sizeof(G));
vector<int>up;
vector<int>up1;
vector<int>up2;
    for(int i=0;i<=mx;i++)
        G[i].clear();

    while(n--){
        int x,y;
        cin>>x>>y;
        up.push_back(x);
        up.push_back(y);
        G[x].push_back(y);
        indegree[y]++;
    }
    queue<int>q;
    for(int i=1;i<=m;i++)
    {
        if(indegree[i]==0)
            up1.push_back(i);
            //q.push(i);
    }
    vector<int>fin;
    for(int i=0;i<up.size();i++){
        for(int j=0;j<up1.size();j++){
            if(up[i]==up1[j]){
                q.push(up[i]);
                up1.erase(up1.begin()+j);
            }
        }
    }
    if(up1.size()!=0){
            for(int i=0;i<up1.size();i++)
        q.push(up1[i]);
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
    if(j!=m)
        cout<<"IMPOSSIBLE"<<endl;
    else{
    for(int i=0;i<j;i++){
        printf("%d\n",ans[i]);
    }
    }
    }
}
