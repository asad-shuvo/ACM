#include<bits/stdc++.h>
using namespace std;
#define M 100000
vector<int>edges[M];
vector<int>cost[M];
int main()
{
    int x,y,i;
    int node,ed;
    scanf("%d%d",&node,&ed);
    for(i=1;i<=ed;i++){
        scanf("%d%d",&x,&y);
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }
    int k;
    for(i=0;i<=ed;i++){
            k=0;
            cout<<i<< "<<";
        for(int j=0;j<edges[i].size();j++){
            k++;
            cout<<edges[i][j]<<" ";
        }

        cout<<endl;
        cout<<k<<endl;
    }
}
