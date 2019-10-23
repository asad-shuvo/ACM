#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define mx 1000
int vis[mx][mx],cell[mx][mx],dis[mx];
void BFS(int sx,int sy)
{
    queue<pii>q;
    q.push(pii(sx,sy));
    vis[sx][sy]=1;
    while(!q.empty())
    {
        pii top=q.front();q.pop();
        for(int i=0;i<8;i++)
        {
            int tx=top.first+fx[i];
            int ty=top.second+fy[i];
            if(tx>=0 && ty>=0 && tx<row && ty<col && vis[tx][ty]==0)
            {
                dis[tx][ty]=dis[top.first][top.second]+1;
                vis[tx][ty]=1;
                q.push(pii(tx,ty));
            }
        }
    }
}

int main()
{
    int p1,p2,p3,p4;
    int d1,d2,d3,d4;
    cin>>p1>>p2>>p3>>p4;
    cin>>d1>>d2>>d3>>d4;
    //int x1=p1*10+p2;
    //int y1=p3*10+p4;
    //int x2=d1*10+d2;
    //int y2=d3*10+d4;
    int fr;
    memset(vis, 0 ,sizeof(vis));
    memset(dis, 0 ,sizeof(dis));
    cin>>fr;
    while(fr--)
    {
        int f1,f2,f3,f4;
        cin>>f1>>f2>>f3>>f4;
        //int z1=f1*10+f2;
      //  int z2=f3*10+f4;
        vis[f1][f2]=1;
        vis[f3][f4]=1;
    }
    BFS(x1,y1);
   // cout<<x1<<" "<<x2;
}
