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
int G[20][20];
int vis[1005][1005];
int dis[1005][1005];
int temp[1005][1005];
int vis1[20][20];
int tke;
void BFS(int sx,int sy)
{
    queue<node>q;
    mem(vis,0);
    mem(dis,0);
    mem(temp,0);

    q.push(node(sx,sy));
    vis[sx][sy]=1;
    dis[sx][sy]=0;
    temp[sx][sy]=0;
    while(!q.empty())
    {
        node top=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=top.u+fx[i];
            int ty=top.v+fy[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
                dis[tx][ty]=dis[top.u][top.v]+1;
                if(G[top.u][top.v]!=G[tx][ty])
                    {
                        temp[tx][ty]=temp[top.u][top.v]+1;
                    }
                    else temp[tx][ty]=temp[top.u][top.v];
                    if(tx==r-1 && ty==c-1)
                    {
                        tke=min(tke,temp[tx][ty]);
                    }
                q.push(node(tx,ty));
            }
        }
    }
}

int main()
{
    sc2(r,c);
    for(int i=0;i<r;i++){
        string A;
        cin>>A;
            for(int j=0;j<A.size();j++){
                G[i][j]=A[j]-'0';
            }
    }
    tke=INT_MAX;
    BFS(0,0);
    cout<<tke<<endl;
}



