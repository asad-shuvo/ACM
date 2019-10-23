#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>edges[MAX];
vector<int>cost[MAX];
int main()
{
    int i,j,N,E,x,y;
    scanf("%d%d",&N,&E);
    for(i=0;i<E;i++){
        scanf("%d%d",&x,&y);
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }
    for(i=0;i<E;i++){
        for(j=0;j<edges[i].size();j++){
            cout<<edges[i][j]<<" ";
        }
        printf("\n");
    }
}
