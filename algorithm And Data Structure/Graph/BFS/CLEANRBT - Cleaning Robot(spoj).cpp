#include<bits/stdc++.h>
using namespace std;
#define mx 25
#define pii pair<int,int>
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
int cell[mx][mx], vis[mx][mx];
int d[mx][mx];
int row, col;
int BFS(int sx, int sy)
{
    vis[sx][sy] = 1;
    int p;
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
                if(cell[tx][ty]==1) cell [tx][ty]=0;
                d[tx][ty] = d[top.first][top.second] + 1;
                p=d[tx][ty];
                //cout<<p<<endl;
                q.push(pii(tx,ty));
            }
        }
    }
    return p;
}
int main()
{
    scanf("%d%d",&col,&row);
    int x1,y1;
        memset(vis, 0, sizeof(vis));
        memset(cell, 0, sizeof(cell));

    for(int i=0;i<row;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='o'){
              x1=i,y1=j;
            }
              if(s[j]=='x') vis[i][j]=1;
              if(s[j]=='*') cell[i][j]=1;
        }
    }
    int flag=0;
    //cout<<BFS(x1,y1)<<endl;
    int B=BFS(x1,y1);
    for(int i=0;i<mx;i++)
    {
        for(int j=0;j<mx;j++)
        {
            if(cell[i][j]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d  ",vis[i][j]);
        }
        cout<<endl;
    }
    if(flag==0)
        printf("%d\n",B);
    else
        printf("-1\n");
  // cout<< BFS(x1,y1)<<endl;
}


