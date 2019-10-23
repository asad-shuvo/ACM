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
    int r=30,c=30,q;
char G[35][35];
int vis[35][35];
int BFS(int sx,int sy)
{
    queue<node>q;
    mem(vis,0);
    q.push(node(sx,sy));
    vis[sx][sy]=1;
    while(!q.empty())
    {
        node top=q.front();q.pop();
        for(int i=0;i<4;i++)
        {
            int tx=top.u+fx[i];
            int ty=top.v+fy[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && vis[tx][ty]==0 && G[tx][ty]!='|' && G[tx][ty]!='-' && G[tx][ty]!='X')
            {
                vis[tx][ty]=1;
                if(G[tx][ty]=='G')return 1;
                q.push(node(tx,ty));
            }
        }
    }
    return -1;
}
int main()
{
    int test,te;
    string A;
    while(getline(cin,A)){
            mem(vis,0);
            //for(int i=0;i<31;i++)G[i].clear();
            int sx,sy;
    for(int i=0;i<A.size();i++){
        G[0][i]=A[i];
        if(A[i]=='P')
        {
            sx=0,sy=i;
        }
    }
    for(int i=1;i<=29;i++){
        getline(cin,A);
        for(int j=0;j<A.size();j++){
            G[i][j]=A[j];
            if(A[j]=='P'){
                sx=i;
                sy=j;
            }
        }
    }
    int ret=BFS(sx,sy);
    if(ret==1)
        pr("Possible\n");
    else
        pr("Impossible\n");
}
}

