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
#define mx 35
VI G[mx],G1[mx],out[mx];
int vis1[mx],vis2[mx],visited[mx][mx];
stack<int>stk;
void init()
{
    int i;
    FOR(i,0,mx)
    {
        G[i].clear();
        G1[i].clear();
        out[i].clear();
        vis1[i]=0;
        vis2[i]=0;
    }
    memset(visited,0,sizeof(visited));
}
map<int,int>mp2;
void dfs1(int u)
{

     vis1[u]=1;
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(vis1[v]==0)
            dfs1(v);
    }
    stk.push(u);
}
void dfs2(int u,int ind)
{
     //if(mp2[u]==0){
        out[ind].p_b(u);
      //  mp2[u]=1;
    //}
         vis2[u]=1;

    //out.p_b(u);
    for(int i=0;i<G1[u].size();i++)
    {
        int v=G1[u][i];
        if(vis2[v]==0)
            dfs2(v,ind);
    }

}
int main()
{
    int N,M,te=0,tes=0;

    while(sc("%d%d",&N,&M)&&N>0 && M>0){
            tes++;
    if(tes>1)cout<<endl;
     map<string,int>mp;
    map<int,string>mpstr;
    vector<string>vs;
init();
    int cnt=0;
    while(M--){
        string a,b;
        cin>>a>>b;
        if(mp[a]==0){
            cnt++;
            mp[a]=cnt;
            mpstr[cnt]=a;
        }
        if(mp[b]==0)
        {
            cnt++;
            mp[b]=cnt;
            mpstr[cnt]=b;
        }
        if(visited[mp[a]][mp[b]]==0){
        G[mp[a]].p_b(mp[b]);
        G1[mp[b]].p_b(mp[a]);
        visited[mp[a]][mp[b]]=1;
        }
       // G[mp[b]].p_b(mp[a]);
    }
    for(int i=1;i<=N;i++)
    {
        if(vis1[i]==0)
            dfs1(i);
    }
    int ind=0;
    pr("Calling circles for data set %d:\n",++te);
    while(!stk.empty())
    {

        int T=stk.top();stk.pop();
        //cout<<T<<endl;
        if(vis2[T]==0){
            dfs2(T,ind);
        }
        int len=out[ind].size();
        for(int i=0;i<len;i++){
             // cout<<out[i]<<" ";
             int take=out[ind][i];
             cout<<mpstr[take];
             if(i!=len-1)pr(", ");if(i==len-1)cout<<endl;
              //cout<<vs[out[i]-1]<<" ";
            //cout<<vs[out[i]]-1<<" ";
        }
        ind++;
       // cout<<endl;
        //out.clear();
    }
    mp.clear();
    mpstr.clear();
}
}
