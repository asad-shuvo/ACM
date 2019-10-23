#include <bits/stdc++.h>
using namespace std;
#define mx 205
#define pii pair<int,int>
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
int vis[mx][mx];
int d[mx][mx],cell[mx][mx];
int row,col;
int BFS(int sx, int sy)
{
    vis[sx][sy] = 1;
            int take=0;

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
            if(tx>=0 && ty>=0 && tx<row && ty<col && vis[tx][ty]== 0)
            {
                vis[tx][ty] = 1;
                d[tx][ty] = d[top.first][top.second] + 1;
                if(tx==0 || tx==row-1 || ty==0 || ty==col-1){
                    take= d[tx][ty];
                    return take+1;
                }
                q.push(pii(tx,ty));
            }
        }
    }
    return take;
}
int main()
{
    int x1,y1,m=0,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&row,&col);
    memset(vis, 0, sizeof(vis));
    for(int i=0;i<row;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='#') vis[i][j]=1;
            if(s[j]=='J') {
                 x1=i, y1=j;
            }
            if(s[j]=='F'){
                vis[i][j]=1;
                if(i+1>=0 && j>=0 && (i+1)<row && j<col)
                vis[i+1][j]=1;
                if(i-1>=0 && j>=0 && (i-1)<row && j<col)
                vis[i-1][j]=1;
                if(i>=0 && (j+1)>=0 && i<row && (j+1)<col)
                vis[i][j+1]=1;
                if(i>=0 && (j-1)>=0 && i<row && (j-1)<col)
                vis[i][j-1]=1;
            }
        }
    }
int t=BFS(x1,y1);
    if(t==0)
        printf("Case %d: IMPOSSIBLE\n",++m);
    else
        printf("Case %d: %d\n",++m,t);
}
}
