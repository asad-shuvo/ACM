#include <bits/stdc++.h>
using namespace std;
#define mx 8
#define pii pair<int,int>
int vis[mx][mx],dis[mx][mx],row=8,col=8;
int fx[]={-2,-2,2,2,1,1,-1,-1};
int fy[]={1,-1,1,-1,2,-2,2,-2};
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
    string a,b;
    while(cin>>a>>b){
    int x1=a[1]-'0'-1;
    int y1=a[0]-'a';
    int x2=b[1]-'0'-1;
    int y2=b[0]-'a';
    //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    memset(vis , 0 ,sizeof(vis));
    memset(dis, 0 , sizeof(dis));
    BFS(x1,y1);
    cout<<"To get from "<<a<<" to "<<b<<" takes "<<dis[x2][y2]<<" knight moves."<<endl;
    }
}
