#include <bits/stdc++.h>
using namespace std;
vector<int>G[100];
int bfs(int n,int source){
    int    taken[100]={0};
    vector<int>v1,v2;

    printf("Level 0: %d",source);
    v1.push_back(source);
    for(int loop=1;loop<=n;loop++){
        printf("Level : %d",loop);
        for(int i=0;i<v1.size();i++){
            int u=v1[i];
            for(int j=0;j<G[u].size();j++){
                int v=G[u][j];
                if(!taken[v]){
                    printf("%d\n",v);
                    taken[v]=1;
                    v2.push_back(v);
                }
            }
        }
        if(v2.empty())
        {
            printf("Empty\n");
            break;
        }
        else{
            v1.clear();
            v1=v2;
            v2.clear();
        }
    }
}
int main()
{
    int N,E,x,y,i,j;
    cin>>N>>E;
    for(i=1;i<=E;i++){
        cin>>x>>y;
        G[x].push_back(y);
    }
    int n1,n2;
    cin>>n1>>n2;
    bfs(N,n1);
}
