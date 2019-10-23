#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define mx 10005
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
VI edge[mx],ans,G;
bool cycle;
int vis[mx];
void dfs(int u)
{
    if(!cycle)
        return;
        vis[u]=1;
    for(int i=0;i<edge[u].size();i++){
            int v=edge[u][i];

             if(vis[v]==1) {
        cycle=false;
        return;
    }
         if(vis[v]==0) dfs(v);
    }
 //       ans.push_back(u);
    vis[u]=2;

}
int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--){
    map<string,int>mp;
    int m;
    sc("%d",&m);
    for(int i=0;i<=mx;i++){
        vis[i]=0;
        edge[i].clear();
    }
        int i=0;
    while(m--){
        string str1,str2;
        cin>>str1>>str2;
        if(mp[str1]==0){
                i++;
            mp[str1]=i;
            G.push_back(mp[str1]);

        }
            if(mp[str2]==0){
                        i++;
        mp[str2]=i;
        G.push_back(mp[str1]);

            }

        edge[mp[str1]].push_back(mp[str2]);
    }
    cycle=true;
    for(i=0;i<G.size() && cycle;i++)
    {
        if(vis[G[i]]==0)
            dfs(G[i]);
    }
    if(cycle==false)
        pr("Case %d: No\n",++te);
    else
        pr("Case %d: Yes\n",++te);
}
}
