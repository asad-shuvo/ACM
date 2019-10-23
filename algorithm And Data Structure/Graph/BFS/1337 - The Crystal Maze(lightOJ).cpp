#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
struct node{
int u,v;
node(int i,int j){
u=i;
v=j;
}
};
    int r,c,q;
char G[505][505];
int vis[505][505],tke;
int value[505][505],vis1[505][505];
int BFS(int sx,int sy)
{
    queue<node>q;
    mem(vis,0);
    q.push(node(sx,sy));
    vis[sx][sy]=1;
    if(G[sx][sy]=='C')tke++;
    if(G[sx][sy]=='#')return 0;
    while(!q.empty())
    {
        node top=q.front();q.pop();
        for(int i=0;i<4;i++)
        {
            int tx=top.u+fx[i];
            int ty=top.v+fy[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && vis[tx][ty]==0 && G[tx][ty]!='#')
            {
                vis[tx][ty]=1;
                if(G[tx][ty]=='C')tke++;
                q.push(node(tx,ty));
            }
        }
    }
    return tke;
}
void valueBFS(int sx,int sy,int ret)
{
    if(G[sx][sy]=='#')return;
    queue<node>q;
    //mem(vis1,0);
    q.push(node(sx,sy));
    vis1[sx][sy]=1;
    value[sx][sy]=ret;
    while(!q.empty())
    {
        node top=q.front();q.pop();
        for(int i=0;i<4;i++)
        {
            int tx=top.u+fx[i];
            int ty=top.v+fy[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && vis1[tx][ty]==0 && G[tx][ty]!='#')
            {
                vis1[tx][ty]=1;
                value[tx][ty]=ret;
                q.push(node(tx,ty));
            }
        }
    }
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
            mem(value,0);
            mem(vis1,0);
    sc3(r,c,q);
    getchar();
    for(int i=0;i<r;i++){
                        char a[505];
            gets(a);

        for(int j=0;j<c;j++){
            //scanf("%c",&a);
            //cin>>a;
            //scanf
    //        a=getchar();
            G[i][j]=a[j];
        }
    }
  /*  for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }*/
    pr("Case %d:\n",++te);
    while(q--){
    int x,y;
    sc2(x,y);
    tke=0;
    if(value[x-1][y-1]==0 && vis1[x-1][y-1]==0){
    int ret=BFS(x-1,y-1);
    valueBFS(x-1,y-1,ret);
    }
    pr("%d\n",value[x-1][y-1]);
    }
}
}
