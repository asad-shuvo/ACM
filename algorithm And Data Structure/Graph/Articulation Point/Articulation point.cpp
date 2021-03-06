#include<bits/stdc++.h>
using namespace std;
#define mxx 10005
vector<int> g[mxx];
vector<int> art,node;
#define inf 1000000

int tme, root;
int dis[mxx],vis[mxx], lo[mxx], par[mxx];
int  ans;
map<int, int> mp;
void init()
{
    for(int i = 0; i < mxx; i++)
    {
        vis[i] = 0;
        dis[i] = 0;
        lo[i] = inf;
        par[i] = 0;
    }
}

void dfs(int u)
{
        vis[u] = 1;
    tme++;
    dis[u] = tme;
    lo[u] = tme;

    int cnt = 0;

    for(int  i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];
        if(par[u] == v)
        {
            continue;
        }

        if(vis[v] == 1)
        {
            lo[u] = min(lo[u], dis[v]);
        }

        if(vis[v] == 0)
        {
            cnt++;
            par[v] = u;
            dfs(v);
            lo[u] = min(lo[u], lo[v]);
            if(dis[u]<=lo[v] && par[u] != 0 && mp[u] == 0)
            {
                //cout << u << endl;
                ans++;
                mp[u] = 1;
                node.push_back(u);
            }
             if(par[u] == 0 && cnt > 1 && mp[u] == 0)
            {
                //cout << u << endl;
                ans++;
                mp[u] = 1;
                node.push_back(u);
            }

        }
    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int test;

   // scanf("%d", &test);

    //for(int tc = 1; tc <= test; tc++)
    //{

        int n, m;
        init();
        scanf("%d %d", &n, &m);

        for(int i = 0; i < m; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }

        ans = 0;
        tme = 0;

        for(int i = 1; i <= n; i++)
        {
            if(vis[i] == 0)
            {
                dfs(i);
            }
        }

        printf("Ans is:  %d\n",ans);

        cout<<"Articulation Points are: ";
        for(int i=node.size()-1;i>=0;i--)
            cout<<node[i]<< " ";
        cout<<endl;
        for(int i = 0; i <= n; i++)
            g[i].clear();

            mp.clear();
    return 0;
}
/*
7 7
1 2
1 3
3 4
3 7
4 5
4 6
6 7
*/
