#include <bits/stdc++.h>
using namespace std;
int mat[20][50];
int main()
{
    int n,e,i,j,n1,n2;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        int cost;
        cin>>n1>>n2>>cost;
        mat[n1][n2]=cost;
        mat[n2][n1]=cost;
    }
    for(i=1;i<=e;i++){
        for(j=1;j<=e;j++){
        cout<<mat[i][j]<<" ";
        }
    cout<<endl;
    }
}
