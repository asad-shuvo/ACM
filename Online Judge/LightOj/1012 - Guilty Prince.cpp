#include<bits/stdc++.h>
using namespace std;
#define mx 200
char grid[mx][mx];
int vis[mx][mx],sum,n,m;
int dfs(int i,int j){
        if(i>=m || j>=n || i<0 || j<0)
            return 0;
        if(grid[i][j]=='#'){
            vis[i][j]=1;
            return 0;
        }
            if(vis[i][j]==0 && grid[i][j]=='.'){
                vis[i][j]=1;
                sum++;
                dfs(i,j+1);
                dfs(i,j-1);
                dfs(i+1,j);
                dfs(i-1,j);

            }
        }

int main()
{
   // char str[100][100];
    int i,k,l,j,test,t=0;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&n,&m);
    getchar();
sum=0;
    for(i=0;i<m;i++){
        gets(grid[i]);
    }

    // memset(grid, '\0' ,sizeof(grid));
    memset(vis, 0 ,sizeof(vis));
  //  int sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(grid[i][j]=='@' && vis[i][j]==0){
                    grid[i][j]='.';
                    dfs(i,j);
             //sum++;
            }
        }
    }
        printf("Case %d: %d\n",++t,sum);
    }
}
