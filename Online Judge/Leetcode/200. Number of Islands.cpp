class Solution {
public:
    int vis[500][500];
    int r,c;
    void dfs(int i,int j,vector<vector<char>>& grid){
      //  cout<<i<<j<<endl;
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() )return;
        if(grid[i][j]=='0' or vis[i][j]==1)return;
        vis[i][j]=1;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)return 0;
        if(grid[0].size()==0)return 0;
        r=grid.size(),c=grid[0].size();
        int cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(vis[i][j]==0 and grid[i][j]=='1'){
                   // vis[i][j]=1;
                    cnt++;
                    dfs(i,j,grid);
                }
            }
        }
        return cnt;
    }
};
