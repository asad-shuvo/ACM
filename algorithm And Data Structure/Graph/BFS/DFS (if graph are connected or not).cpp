#include <bits/stdc++.h>
using namespace std;
int G[100][100],n,v[100];
int dfs(int i){
    v[i]=1;
    for(int j=0;j<n;j++){
        if(!v[j]){
            dfs(j);
        }
    }
}
int main()
{
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            v[i]=0;
        for(int j=0;j<n;j++){
            scanf("%d",&G[i][j]);
        }
    }
    dfs(1);
    for(int i=0;i<n;i++){
        if(v[i]==1)
            sum++;
    }
    if(sum==n)
        cout<<"connected"<<endl;
    else
        cout<<"Not connected"<<endl;

}
