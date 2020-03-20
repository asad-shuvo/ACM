class Solution {
public:
    int r,c;
    vector<vector<int>>sav;
  int  vis[60][60];
    int mv;
    void dfs(int i,int j,vector<vector<int>> image,int v){
        if(i>=r or j>=c or i<0 or j<0)return;
        if(vis[i][j]==1 )return;
        vis[i][j]=1;
        if(image[i][j]!=mv)return;
        sav[i][j]=v;
         dfs(i+1,j,image,v);
         dfs(i-1,j,image,v);
         dfs(i,j+1,image,v);
         dfs(i,j-1,image,v);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        mv=image[sr][sc];
        r=image.size();
        c=image[0].size();
        
        for(int i=0;i<60;i++){
            for(int j=0;j<60;j++){
                vis[i][j]=0;
            }
        }
        sav=image;
        vis[sr][sc]=1;
        sav[sr][sc]=newColor;
        int i=sr,j=sc;
        dfs(i+1,j,image,newColor);
         dfs(i-1,j,image,newColor);
         dfs(i,j+1,image,newColor);
         dfs(i,j-1,image,newColor);
        return sav;
    }
};
