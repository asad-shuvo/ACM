#include <bits/stdc++.h>
using namespace std;
#define mx 25
#define pii pair<int,int>
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
int vis[mx][mx];
int d[mx][mx],cell[mx][mx];
int row,col;
void BFS(int sx, int sy)
{
    //memset(vis, 0, sizeof(vis));
    vis[sx][sy] = 1;
    queue <pii> q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int tx = top.first + fx[k];
            int ty = top.second + fy[k];
            if(tx>=0 && ty>=0 && tx<row && ty<col && vis[tx][ty]== 0 &&  cell[tx][ty]==0)
            {
                vis[tx][ty] = 1;
                d[tx][ty] = d[top.first][top.second] + 1;
                q.push(pii(tx,ty));
            }
        }
    }
}

int main()
{
    int test,m=0;
    scanf("%d",&test);
    while(test--){
memset(cell , 0 ,sizeof(cell));
    scanf("%d%d",&row,&col);
    int a1,a2,b1,b2,c1,c2,x2,y2;
    for(int i=0;i<row;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='#') cell[i][j]=1;
            if(s[j]=='m') cell[i][j]=1;
            if(s[j]=='a') a1=i,a2=j;
            if(s[j]=='b') b1=i,b2=j;
            if(s[j]=='c') c1=i,c2=j;
            if(s[j]=='h') x2=i,y2=j;
        }
    }
 int maxxxx=-2;
 memset(vis, 0 ,sizeof(vis));
 memset(d, 0 ,sizeof(d));
 BFS(a1,a2);
 if(d[x2][y2]>maxxxx)maxxxx=d[x2][y2];
 memset(vis, 0 ,sizeof(vis));
 memset(d, 0 ,sizeof(d));
 BFS(b1,b2);
 if(d[x2][y2]>maxxxx) maxxxx=d[x2][y2];
 memset(vis, 0 ,sizeof(vis));
 memset(d, 0 ,sizeof(d));
BFS(c1,c2);
 if(d[x2][y2]>maxxxx) maxxxx=d[x2][y2];
 printf("Case %d: %d\n",++m,maxxxx);
    }
}
