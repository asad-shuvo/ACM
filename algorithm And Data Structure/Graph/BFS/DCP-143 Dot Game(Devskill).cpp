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
struct node
{
    int u,v;
    node(int i,int j)
    {
        u=i;
        v=j;
    }
};
int r,c,q;
char G[20][20];
int vis[20][20];
int vis1[20][20];
int tke;
int BFS(int sx,int sy)
{
    tke++;
    queue<node>q;
    mem(vis,0);
    q.push(node(sx,sy));
    vis[sx][sy]=1;
    while(!q.empty())
    {
        node top=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=top.u+fx[i];
            int ty=top.v+fy[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && vis[tx][ty]==0 && G[tx][ty]!='.' && G[tx][ty]!='X')
            {
                vis[tx][ty]=1;
                tke++;
                q.push(node(tx,ty));
            }
        }
    }
    return tke;
}
int BFS1(int sx,int sy)
{
    tke++;
    queue<node>q;
    q.push(node(sx,sy));
    vis1[sx][sy]=1;
    while(!q.empty())
    {
        node top=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=top.u+fx[i];
            int ty=top.v+fy[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && vis1[tx][ty]==0 && G[tx][ty]!='*' && G[tx][ty]!='X')
            {
                vis1[tx][ty]=1;
                tke++;
                q.push(node(tx,ty));
            }
        }
    }
    return tke;
}
vector<int>ttx,tty,tsx,tsy;
int main()
{
    int test,te;
    int n,m;
    sc2(c,r);

    mem(vis,0);
    getchar();
    for(int i=0; i<r; i++)
    {
        string A;
        getline(cin,A);
        for(int j=0; j<A.size(); j++)
        {
            G[i][j]=A[j];
            if(A[j]=='*')
            {
                ttx.p_b(i);
                tty.p_b(j);
            }
            if(A[j]=='.')
            {
                tsx.p_b(i);
                tsy.p_b(j);
            }
        }

    }
    int ret1=-1;
    for(int i=0; i<ttx.size(); i++)
    {
        tke=0;
        if(vis[ttx[i]][tty[i]]==0)
        {
            int ret=BFS(ttx[i],tty[i]);
            ret1=max(ret,ret1);
        }
    }
    int ret2=-1;
    for(int i=0; i<tsx.size(); i++)
    {
        tke=0;
        if(vis1[tsx[i]][tsy[i]]==0)
        {
            int ret=BFS1(tsx[i],tsy[i]);
            ret2=max(ret,ret2);
        }
    }
    if(ret1>ret2)
        pr("TULTUL WINS THE ROUND.\n");
    if(ret2>ret1)
        pr("TASFIA WINS THE ROUND.\n");
    if(ret1==ret2)
        pr("NOBODY LOSES.\n");
}


