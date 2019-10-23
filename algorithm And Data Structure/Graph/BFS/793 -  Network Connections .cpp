#include <bits/stdc++.h>
using namespace std;
#define mx 200
vector<int>G[mx];
int vis[mx];
int BFS(int source,int des)
{
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                q.push(v);
                if(v==des)
                    return 1;
            }
        }
    }
    return 0;

}
int main()
{
    int computer,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&computer);
    //while(getchar()!='\n');
   getchar();
    memset(G, 0 ,sizeof(G));
    int x,y;
    char S;
    int s=0,u=0;
    char str[100];
 //   getchar();
//    int x,y;
   // while(gets(str) && sscanf(str,"%c,%d,%d",&S,&x,&y)==3)
    while (gets(str) && strlen(str)) {
            sscanf(str, "%c %d %d", &S, &x, &y);
        if(S=='c'){
            G[x].push_back(y);
        G[y].push_back(x);
        }
        if(S=='q')
        {
                memset(vis , 0 ,sizeof(vis));
            if(BFS(x,y)==1)
                s++;
            else
                u++;
        }

    }
        cout<<s<<" "<<u<<endl;

    }
}
