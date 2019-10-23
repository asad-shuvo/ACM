#include <bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge,n1,n2,cost,i,j;
    int matrix[100][100];
    cin>>node>>edge;
    for( i=0;i<edge;i++){
        for(j=0;j<node;j++){
        cin>>matrix[i][j];
    }
    }
    for(i=0;i<edge;i++){
        for(j=0;j<node;j++){
            cout<<matrix[i][j] <<" ";
        }
        cout<<endl;
    }
}
