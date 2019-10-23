#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
#define mx 100
#define pii pair<int,int>
int fx[]={-2,-2,2,2,1,1,-1,-1};
int fy[]={1,-1,1,-1,2,-2,2,-2};
int kmx[]={1,1,1,0,0,-1,-1,-1};
int kmy[]={0,1,-1,1,-1,0,1,-1};
int vis[mx][mx];
int d[mx][mx];
int cell[mx][mx];
int dis[mx][mx];
int row,col;
void BFS(int sx, int sy)
{

    queue<pii>q;
    q.push(pii(sx,sy));
    vis[sx][sy]=1;
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int tx=top.first+kmx[i];
            int ty=top.second+kmy[i];
            if(tx>=0 && ty>=0 && tx<row && ty<col && vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
          //      cell[tx][ty]=1;
                dis[tx][ty]=dis[top.first][top.second]+1;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main()
{
    //f_i
    //f_o
    int test;
    scanf("%d",&test);
    while(test--){
    cin>>row>>col;
    int x1,y1,x2,y2;

    for(int i=0;i<row;i++){
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++){
            if(a[j]=='B')
            {
                x2=i,y2=j;
                cell[x2][y2]=1;
                vis[x2][y2]=0;
                //cout<<cell[x2][y2]<<endl;
            }
            if(a[j]=='A')
            {
                x1=i,y1=j;
                cell[x1][y1]=1;
                vis[x1][y1]=0;
            }
            if(a[j]=='Z')
            {
                vis[i][j]=1;
                for(int k=0;k<8;k++){
                    int zx=i+fx[k];
                    int zy=j+fy[k];
                    if(zx>=0 && zy>=0 && zx<row && zy<col && cell[zx][zy]==0 && vis[zx][zy]==0)
                    {
                        vis[zx][zy]=1;
                    }
                }
            }
        }
        }
        /*
for(int i=0;i<row;i++)

{
    for(int j=0;j<col;j++)
    {
        printf("%d   ",vis[i][j]);

    }
    cout<<endl;
}*/
        BFS(x1,y1);
        /*
        for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("%d   ",cell[i][j]);

    }
    cout<<endl;
}*/
        if(dis[x2][y2]==0)
            printf("King Peter, you can't go now!\n");
        else
            printf("Minimal possible length of a trip is %d\n",dis[x2][y2]);
            memset(vis, 0 ,sizeof(vis));
    memset(cell, 0 ,sizeof(cell));
    memset(dis, 0 ,sizeof(dis));

    }

}
