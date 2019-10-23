#include <bits/stdc++.h>
using namespace std;
#define m 200
char mat[m][m];
int arr[m][m];
int n;
void bfs(int i,int j){
    if(i>n || j>n ||i<0 || j<0)
        return;
    if(arr[i][j]==0){
        arr[i][j]=1;
        if(mat[i][j]=='1'){
            bfs(i+1,j+1);
            bfs(i-1,j-1);
            bfs(i,j-1);
            bfs(i,j+1);
            bfs(i+1,j);
            bfs(i-1,j);
            bfs(i-1,j+1);
            bfs(i+1,j-1);
        }
    }
}
int main()
{
    int i,j,k,l,t=0;
    while(scanf("%d",&n)!=EOF){
            t++;
    getchar();
    for(i=0;i<n;i++){
        gets(mat[i]);
    }
    int sum=0;
    memset(arr, 0 , sizeof(arr));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]=='1' && arr[i][j]==0){
                sum++;
                bfs(i,j);
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",t,sum);
    }
    return 0;
}
