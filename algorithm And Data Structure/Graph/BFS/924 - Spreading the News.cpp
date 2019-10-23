#include <bits/stdc++.h>
using namespace std;
#define mx 2505
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
int vis[mx];
vector<int>G[mx];
int dis[mx];
int arr[mx];
int BFS(int source)
{
    int take=0;
    queue<int>q;
    dis[source]=0;
    vis[source]=1;
    q.push(source);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]==0){
                dis[v]=dis[u]+1;
                //arr[dis[v]]++;
                take=1;
                //cout<<dis[v]<<endl;
                vis[v]=1;
                q.push(v);
            }
        }
    }
    return take;
}
int main()
{
    f_i
    f_o
    int E;
    scanf("%d",&E);
    for(int i=0;i<E;i++)
    {
        int n,x,y;
        scanf("%d",&n);

        while(n--){
                scanf("%d",&x);
        G[i].push_back(x);
        }
    }
    int q;
    map<int,int>mp;
    scanf("%d",&q);
    while(q--){
            int src;
    scanf("%d",&src);
       // memset(vis, 0, sizeof(vis));
        //memset(dis, 0, sizeof(dis));
        int B=BFS(src);
        if(B==0)
            printf("0\n");
        //cout<<BFS(src)<<endl;
        else{

      for(int z=0;z<E;z++)
            {
              mp[dis[z]]++;
            }
            vector<int>v1,v2;
             map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        v1.push_back((*it).first);
        v2.push_back((*it).second);

    }
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v2.size();j++)
        {
            if(v2[i]<v2[j]){
                swap(v1[i],v1[j]);
                swap(v2[i],v2[j]);
            }
        }
    }
   int p=v2.size();
    int p1=v1.size();
    int ttt=v2[p-1];
  //  cout<<ttt<<endl;
    int op;
    for(int kk=0;kk<v2.size();kk++){
        if(v2[kk]==ttt)
        {
            if(v1[kk]!=0){
            op=v1[kk];
            break;
            }
        }
    }
    cout<<ttt<<" "<<op<<endl;
    memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        mp.clear();
        v1.clear();
        v2.clear();
    }
    }
}
