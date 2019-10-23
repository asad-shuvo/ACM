#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define mx 1000
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int row,col;
int vis[mx][mx],cell[mx][mx];
int dis[mx][mx];
void BFS(int sx, int sy)
{
queue<pii>q;
q.push(pii(sx,sy));
vis[sx][sy]=1;
while(!q.empty())
{
    pii top=q.front();
    q.pop();
    for(int k=0;k<4;k++)
    {
        int tx=top.first+fx[k];
        int ty=top.second+fy[k];

    if(tx>=0 && ty>=0 && tx<row && ty<col && cell[tx][ty]==0 && vis[tx][ty]==0)
    {
        vis[tx][ty]=1;
        dis[tx][ty]=dis[top.first][top.second]+1;
        q.push(pii(tx,ty));
    }
}


}
}
int main()
{
    while(cin>>row>>col){
            if(row==0 && col==0)
            break;
    memset(cell, 0 ,sizeof(cell));
    int Erow;
    cin>>Erow;
    while(Erow--){
        int r,b,c;
        cin>>r>>b;
        while(b--){
            cin>>c;
            cell[r][c]=1;
        }
    }
    int x1,y1,x2,y2;

    cin>>x1>>y1>>x2>>y2;

        memset(vis, 0 ,sizeof(vis));
        memset(dis, 0 ,sizeof(dis));
    BFS(x1,y1);
    cout<<dis[x2][y2]<<endl;

    }
}
