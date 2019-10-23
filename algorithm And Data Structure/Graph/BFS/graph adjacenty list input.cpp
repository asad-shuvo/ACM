#include <bits/stdc++.h>
using namespace std;
int mat[20][20];
int main()
{
    int node,i,j;
    cin>>node;
    for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
        {
           cin>>mat[i][j];
        }
    }
     for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

