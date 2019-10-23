#include <bits/stdc++.h>
using namespace std;
vector<int>G[100];
int bfs(int n,int source){
    vector<int>v1,v2;
    v1.push_back(source);
    int taken[100]={0};
    printf("Level 0 : %d\n",source);
    for(int loop=1;loop<=n;loop++){
        printf("Level : %d\n",loop);
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
        if(v2.empty()){
            puts("Empty");
            break;
        }
        else{
            puts(" ");
            v1.clear();
            v2=v1;
            v2.clear();
        }
    }
}
int main()
{
    int N,E,n1,n2;
    cin>>N>>E;
    for(int i=1;i<=E;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    }
    cin>>n1>>n2;
    int res=bfs(N,n1);
    cout<<"RES"<<" "<<res<<endl;
}
