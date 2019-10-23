#include <bits/stdc++.h>
using namespace std;
#define M 55
int n,taken[100];
vector<int>defend[100],ans;
int dfs(int i){
    if(!taken[i]){
    for(int j=0;j<defend[i].size();j++){
        dfs(defend[i][j]);
        ans.push_back(i);
        taken[i]=1;
    }
    }
}
int main()
{
    cin>>n;
    memset(taken , 0 , sizeof(taken));
    for(int i=0;i<n;i++)
        dfs(i);
    for(int i=0;i<n;i++)
        cout<<ans[i];
}
