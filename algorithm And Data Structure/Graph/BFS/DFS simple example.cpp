#include <bits/stdc++.h>
using namespace std;
int n,G[100][100],visited[100];
int dfs(int i){
    cout<<i<<endl;
    visited[i]=1;
    for(int j=0;j<n;j++){
    if(visited[i]!=1 && G[i][j]==1){
        dfs(j);
    }
    }

}
int main()
{
    printf("Enter Nodes number: \n");
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&G[i][j]);
        }
    }
    memset(visited,-1,sizeof(visited));
    dfs(1);
}
