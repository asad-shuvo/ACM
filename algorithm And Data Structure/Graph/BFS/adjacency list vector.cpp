#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>mat[100];
    vector<int>cost[100];
    vector<int>indeg[100],outdeg[100];
    int i,j,x,y,node,edge;
    cin>>node>>edge;
    for( i=1;i<=edge;i++)
    {
        cin>>x>>y;
        mat[x].push_back(y);
       // mat[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
        outdeg[x].push_back(1);
        indeg[y].push_back(1);
    }
    for(i=1;i<=node;i++)
    {
        //for(j=0;j<mat[i].size();j++)
        //{
           //
            //cout<<" "<<mat[i][j]<<" ";
            cout<<"indeg"<<" "<<indeg[i].size()<<endl;
            cout<<"outdeg"<<" "<<outdeg[i].size()<<endl;
            cout<<mat[i].size()<<endl;
        //}
        cout<<endl;
    }
}
