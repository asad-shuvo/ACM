#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pii pair<int,int>
#define fs first
#define sc second
#define inf INT_MAX/3
#define mx 1001
int fx[] = {0, 0, 1, -1};
int fy[] = {1,-1, 0,  0};
queue<pii>Q;
string s[mx];
int level[mx][mx], lev[mx][mx], vis[mx][mx];
int row, col;
bool check(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<col && !vis[x][y])
    {
        return 1;
    }
    return 0;
}
void bfs()
{
    while(!Q.empty())
    {
        pii top = Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            int tx = top.fs + fx[i];
            int ty = top.sc + fy[i];
            if(check(tx,ty) && s[tx][ty]!='#')
            {
                vis[tx][ty] = 1;
                level[tx][ty] = level[top.fs][top.sc] + 1;
                Q.push(mp(tx,ty));
            }
        }
    }
}

void BFS(int sx, int sy)
{
    vis[sx][sy] = 1;
    lev[sx][sy] = 0;
    Q.push(mp(sx,sy));
    while(!Q.empty())
    {
        pii top = Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            int tx = top.fs + fx[i];
            int ty = top.sc + fy[i];
            if(check(tx,ty) && s[tx][ty]!='#' && (lev[top.fs][top.sc]+1) < level[tx][ty])
            {
                vis[tx][ty] = 1;
                lev[tx][ty] = lev[top.fs][top.sc] + 1;
                Q.push(mp(tx,ty));
            }
        }
    }
}

int main()
{
    int tc;
    int ind = 0 ;
    cin >> tc;
    while(tc--)
    {
        pii src;
        cin >> row >> col;
        for(int i=0; i<row; i++)
        {
            cin >> s[i];
        }
        for(int i=0; i<mx; i++)
        {
            for(int j=0; j<mx; j++)
            {
                vis[i][j] = 0;
                level[i][j] = inf;
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(s[i][j]=='F')
                {
                    Q.push(mp(i,j));
                    vis[i][j] = 1;
                    level[i][j] = 0;
                }
                else if(s[i][j]=='J')
                {
                    src = mp(i,j);
                }
            }
        }
        bfs();

//    for(int i=0; i<row; i++)
//    {
//        for(int j=0; j<col; j++)
//        {
//            printf("%d ",level[i][j]);
//        }
//        cout << endl;
//    }
        for(int i=0; i<mx; i++)
        {
            for(int j=0; j<mx; j++)
            {
                vis[i][j] = 0;
                lev[i][j] = inf;
            }
        }
        BFS(src.fs,src.sc);
        int Min = inf;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(j==0 || j==col-1 || i==row-1 || i==0)
                {
                    Min = min(Min, lev[i][j]);
                }
            }
        }
        if(Min == inf)
        {

           // printf("Case %d: IMPOSSIBLE\n",++ind);
            printf("IMPOSSIBLE\n");
        }
        else
        {
           // printf("Case %d: %d\n",++ind,Min+1);
            printf("%d\n",Min+1);
        }
    }
}
