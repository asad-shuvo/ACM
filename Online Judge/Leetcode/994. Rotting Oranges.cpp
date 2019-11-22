 int fx[]={1,-1,0,0};
    int fy[]={0,0,1,-1};
class Solution {
public:
   
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int vis[r+1][c+2];
        memset(vis,0,sizeof(vis));
        queue<pair<int,int> >q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    q.push(pair<int,int>(i,j));
                }
            }
        }
        int dis[r+1][c+1];
         memset(dis,0,sizeof(dis));
        while(!q.empty()){
             pair<int,int> top=q.front();
    q.pop();
    for(int k=0;k<4;k++)
    {
        int tx=top.first+fx[k];
        int ty=top.second+fy[k];

    if(tx>=0 && ty>=0 && tx<r && ty<c && grid[tx][ty]==1 && vis[tx][ty]==0)
    {
        vis[tx][ty]=1;
        grid[tx][ty]=2;
        dis[tx][ty]=dis[top.first][top.second]+1;
        q.push(pair<int,int>(tx,ty));
    }
        }
    }
        int M=-1;
        int f=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                M=max(M,dis[i][j]);
                if(grid[i][j]==1)f=1;
            }
        }
        if(f==0)return M;
        else return -1;
    }
};
