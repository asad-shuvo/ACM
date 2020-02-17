#include <bits/stdc++.h>

using namespace std;

// Complete the connectedCell function below.
// int n,m;
int vis[122][122];
int cnt=0;
void dfs(int i,int j,vector<vector<int>> matrix){
    
if(i>=matrix.size() or j>=matrix[i].size() or i<0 or j<0)return;
if(vis[i][j]==1)return;
if(matrix[i][j]==0)return;
// cout<<i<<" "<<j<<endl;
vis[i][j]=1;
cnt++;
dfs(i,j+1,matrix);
dfs(i,j-1,matrix);
dfs(i-1,j,matrix);
dfs(i+1,j,matrix);
dfs(i-1,j+1,matrix);
dfs(i-1,j-1,matrix);
dfs(i+1,j-1,matrix);
dfs(i+1,j+1,matrix);
return;
}
int connectedCell(vector<vector<int>> matrix) {

memset(vis,0,sizeof(vis));
int M=0,i,j;

for( i=0;i<matrix.size();i++){
    for( j=0;j<matrix[i].size();j++){
        if(matrix[i][j]==1 and vis[i][j]==0){
        cnt=0;
            dfs(i,j,matrix);
            M=max(cnt,M);
        }
    }
}
return M;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = connectedCell(matrix);

    fout << result << "\n";

    fout.close();

    return 0;
}

