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
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 10005
VI G[mx],art1,art2;
int vis[mx],par[mx],dis[mx],low[mx];
map<int,int>mp;
int tme,ans;
void init()
{
    int i;
    for(i=0;i<=mx;i++)
    {
        vis[i]=0;
        dis[i]=0;
        par[i]=-1;
        G[i].clear();
        low[i]=100000000;
    }
}
void dfs(int u)
{
    tme++;
    dis[u]=tme;
    vis[u]=1;
    low[u]=tme;
    int cnt=0;
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(par[u]==v) continue;
        if(vis[v]==1) low[u]=min(low[u],dis[v]);
        if(vis[v]==0)
        {
            cnt++;
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<low[v])
            {
                //cout<<dis[u]<< " "<<v<<endl;

                ans++;
                if(u>v)
                {
                 art1.p_b(v);
                art2.p_b(u);
                }
                else{
                art1.p_b(u);
                art2.p_b(v);
            }
            }

        }
    }
}
int main()
{
   // FILE
    int n;
    int u;
    char c1,c2;
    int num,test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d",&n);
    init();
    for(int i=0;i<n;i++)
    {
        sc("%d",&u);
string a;
        cin>>a;
        num=0;
        for(int k=1;a[k]!=')';k++)
        {
            num=num*10+(a[k]-'0');
        }
         //num=a[1]-'0';
       // sc("%c%d%c",&c1,&num,&c2);
        for(int j=1;j<=num;j++)
        {
            int v;
            sc("%d",&v);
            G[u].p_b(v);
            G[v].p_b(u);
        }

    }
     tme=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
                dfs(i);
        }
        pr("Case %d:\n",++te);
            pr("%d critical links\n",ans);
            mp.clear();
for(int i=0;i<art1.size();i++){
    for(int j=0;j<art1.size();j++){
            if(art1[i]==art1[j])
            {
                if(art2[i]<art2[j])
                {
                    swap(art1[i],art1[j]);
            swap(art2[i],art2[j]);
                }
            }
        if(art1[i]<art1[j])
        {
            swap(art1[i],art1[j]);
            swap(art2[i],art2[j]);
        }
    }
}

for(int i=0;i<art1.size();i++){
    cout<<art1[i]<<" - "<<art2[i];
    cout<<endl;
    }
    art1.clear();
    art2.clear();
}

}
