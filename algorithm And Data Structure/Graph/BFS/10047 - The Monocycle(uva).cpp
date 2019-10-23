#include<bits/stdc++.h>
using namespace std;
#define mx 25
#define pii pair<int,int>
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
int cell[mx][mx], vis[mx][mx];
int d[mx][mx];
int row, col;
int BFS(int sx, int sy,int x2,int y2)
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

                d[tx][ty] = d[top.first][top.second] + 1;
                if(tx==x2 && ty==y2){
                p=d[tx][ty];
                return p;
                }
                q.push(pii(tx,ty));
            }
        }
    }
    return 0;
}
int main()
{
    scanf("%d%d",&row,&col);
    int x1,y1,x2,y2;
        memset(vis, 0, sizeof(vis));

    for(int i=0;i<row;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='S'){
              x1=i,y1=j;
            }
              if(s[j]=='#') vis[i][j]=1;
              if(s[j]=='T'){
                x2=i,y2=j;
              }
        }
    }
    //cout<<BFS(x1,y1)<<endl;
    int B=BFS(x1,y1,x2,y2);
        printf("%d\n",B);

  // cout<< BFS(x1,y1)<<endl;
}



