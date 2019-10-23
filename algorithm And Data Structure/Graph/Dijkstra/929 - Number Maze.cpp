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
struct node{
    int x,y,c;
    node(int i,int j,int k){
    x=i;
    y=j;
    c=k;
    }
    bool operator<(const node &p)const
    {
        return c>p.c;
    }
};
int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};
int r,c;
int dist[mx][mx],flag[mx][mx],ans[mx][mx];
void dijkstra()
{
    mem(flag,0);
    mem(ans,70);
    priority_queue<node>q;
    q.push(node(1,1,dist[1][1]));
    ans[1][1]=dist[1][1];
    while(!q.empty())
    {
        node top=q.top();
        q.pop();
        int x=top.x;
        int y=top.y;
        if(flag[x][y])continue;
        flag[x][y]=1;
        for(int i=0;i<4;i++){
            int x1=x+xx[i];
            int y1=y+yy[i];
            if(x1<1 || y1<1 || x1>r || y1>c)continue;
            if(flag[x1][y1])continue;
            int c1=dist[x1][y1];
            if(ans[x1][y1]>ans[x][y]+c1){
                c1=ans[x][y]+c1;
                ans[x1][y1]=c1;
                q.push(node(x1,y1,c1));
            }
        }
    }
    return;
}
int main()
{
    int test;
    sc1(test);
    while(test--){
    sc2(r,c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            sc1(dist[i][j]);
        }
    }
    dijkstra();
    pr("%d\n",ans[r][c]);
    }
}

