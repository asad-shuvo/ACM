#include <bits/stdc++.h>
using namespace std;
#define p 200
int m,n;
int arr[p][p];
char grid[p][p];
void bfs(int i,int j){
    if(i>m || j>n ||i<0 || j<0)
        return ;
    if(arr[i][j]==0){
        arr[i][j]=1;
        if(grid[i][j]=='@'){
            bfs(i-1,j-1);
            bfs(i-1,j);
            bfs(i-1,j+1);
            bfs(i,j-1);
            bfs(i,j+1);
            bfs(i+1,j-1);
            bfs(i+1,j);
            bfs(i+1,j+1);
        }
    }
}
int main()
{
    int i;
    char c;
    int j,sum;
    while(scanf("%d%d",&m,&n)!=EOF && m>0 && n>0)
    {

    sum=0;
    //cin>>m>>n;
    c=getchar();
    for(i=0;i<m;i++){

            gets(grid[i]);
        }
    memset(arr, 0 ,sizeof(arr));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(grid[i][j]=='@' && arr[i][j]==0){
                sum++;
                bfs(i,j);
            }
        }
    }
    cout<<sum<<endl;
    }
}
