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
struct node
{
    int u,v;
    node(int i,int j)
    {
        u=i;
        v=j;
    }
};
int row,col;
char grid[11][11];
int vis[11][11],dis[11][11];
int cnt,val;
int srci,srcj;
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
int BFS(int sx,int sy)
{
    queue<node>q;
    mem(vis,0);
    mem(dis,0);
    q.push(node(sx,sy));
    vis[sx][sy]=1;
    val++;
    if(val==cnt)return 0;
    dis[sx][sy]=0;
    while(!q.empty())
    {

        node top=q.front();q.pop();
        for(int k=0;k<4;k++){
            int tx=top.u+fx[k];
            int ty=top.v+fy[k];
            if(vis[tx][ty]==0 && tx>=0 && ty>=0 && tx<row && ty<col && grid[tx][ty]!='#'){
                if(grid[tx][ty]>='A' && grid[tx][ty]<='Z'){
                    int temp=grid[tx][ty]-'A'+1;
                    if(temp==val+1){
                        val++;
                        dis[tx][ty]=dis[top.u][top.v]+1;
                        if(val==cnt)return dis[tx][ty];
                        vis[tx][ty]=1;
                        q.push(node(tx,ty));
                    }
                    else{
                        if(grid[top.u][top.v]>='A' && grid[top.u][top.v]<='Z'){
                            val++;
                        dis[tx][ty]=dis[top.u][top.v]+1;
                        if(val==cnt)return dis[tx][ty];
                        vis[tx][ty]=1;
                        q.push(node(tx,ty));
                        }
                    }
                }
                else{
                    dis[tx][ty]=dis[top.u][top.v]+1;
                    vis[tx][ty]=1;
                    q.push(node(tx,ty));
                }
            }
        }
    }
    return -1;
}
int main()
{
    int n,test,te=0;
    sc1(test);
    while(test--){
    sc1(n);
    row=col=n;
    getchar();
    char str[12];
    mem(grid,0);
    cnt=0;
    for(int i=0; i<n; i++)
    {
        gets(str);
        for(int j=0; j<n; j++)
        {
            grid[i][j]=str[j];
            if(grid[i][j]=='A')
            {
                srci=i;
                srcj=j;
            }
            if(grid[i][j]>='A' && grid[i][j]<='Z')cnt++;
        }
    }
    val=0;
    int ret=BFS(srci,srcj);
    pr("Case %d: ",++te);
    if(ret==-1)pr("Impossible\n");
    else pr("%d\n",ret);
}

}
