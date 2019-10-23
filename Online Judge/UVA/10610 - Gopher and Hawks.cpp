#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-15
vector<int>G[1000];
int vis[1000];
int dis[1000];
double  dist( double  x1,double y1,double  x2,double  y2){
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int BFS(){
    memset(vis,-1,sizeof(vis));
   // memset(dis,0,sizeof(dis));
    vis[0]=0;
    //dis[0]=0;
    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(u==1)return vis[1];
        for(int i=0;i<(int)G[u].size();i++){
            int v=G[u][i];
            if(vis[v]==-1){
                //vis[v]=;
                //dis[v]=dis[u]+1;
                vis[v]=vis[u]+1;
                q.push(v);
            }
        }
    }
    return -1;
}
int main()
{
    double  u,d;
    scanf("%lf%lf",&u,&d);
    //string a,b,c;
    char lst[1005][2];
    char str[1000];
    double p;
    int N=0;
    gets(str);
    while(gets(str) && strlen(str)>0){
            sscanf(str,"%lf %lf",&lst[N][0],&lst[N][1]);
            N++;
    }
    d=d*u*60;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){

            double  p=dist(lst[i][0],lst[i][1],lst[j][0],lst[j][1]);
            if(p<=d){
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }
    int ans=BFS();
    // ans = bfs();
        if(dist(lst[0][0], lst[0][1], lst[1][0], lst[1][1]) < EPS)
            printf("Yes, visiting 0 other holes.\n");
        else if( ans != -1 )
            printf("Yes, visiting %d other holes.\n", ans-1);
        else printf("No.\n");
        for( int k = 0; k < N; k++ )
            G[k].clear();
//    cout<<res<<endl;
}
