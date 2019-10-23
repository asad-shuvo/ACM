#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
/**
Input: A non-empty connected weighted graph G with vertices G.V and edges G.E
procedure Bellman Ford(G,source):
1  Let distance[] ← infinity
2  Let N ← number of nodes
3  distance[source] = 0
4  for step from 1 to N-1
5             for all edges from (u,v) in G.E
6                 if distance[u] + cost[u][v] < distance[v]
7                               distance[v] = distance[u] + cost[u][v]
8                        end if
9              end for
10 end for
11 for all edges from (u,v) in G.E
12            if distance[u] + cost[u][v] < distance[v]
13        return “Negative cycle detected
14            end if
15 end for
16 return distance
*/
int N,E;
int dis[mx];
vector<int>G[mx],cost[mx][mx];
void BellmanFord(int source){
mem(dis,inf);
dis[source]=0;
for(int i=1;i<N;i++){
    for(int j=0;j<G[i].size())
}
}
int main()
{
    sc2(N,E);
    for(int i=0;i<E;i++){
        int x,y,z;
        sc3(x,y,z);
        G[x].p_b(y);
        xost[x][y]=z;
    }
    int source;
    sc1(source);
    BellmanFord(source);
}
