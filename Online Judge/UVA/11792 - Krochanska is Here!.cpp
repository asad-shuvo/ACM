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
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 10005
#define inf 1000000
VI G[105];
int vis[mx];
int dis[mx];
int sdis[mx];
int vis2[mx];
//int cnt[10000];
int BFS(int source,int cnt[]){
    for(int i=0;i<mx;i++)
        vis[i]=inf;
    int sum=0;
    //memset(vis,inf,sizeof(vis));
    //memset(dis,0,sizeof(dis));
    queue<int>q;
    q.push(source);
    //dis[source]=0;
    vis[source]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(vis[v]==inf){
                //vis[v]=1;
                vis[v]=vis[u]+1;
                if(cnt[v]>1)
                    sum+=vis[v];
                q.push(v);
            }
        }
    }
    return sum;
}
int main()
{
    int test,i,j;
    int N,R;
    sc("%d",&test);
    while(test--){
     int cnt[10000]={0};
    VI v;
    sc("%d%d",&N,&R);
            int x,k=0,arr[10000];

    while(R--){
        while(sc("%d",&x) && x>0){
            arr[k++]=x;
            cnt[x]++;

        }
    }
int arrray[10005];
int p=0;
        FOR(i,0,k-1){
            if(cnt[arr[i]]>1) arrray[p++]=arr[i];
        if(i==0)
        {
            G[arr[i]].push_back(arr[i+1]);
            G[arr[i+1]].push_back(arr[i]);
        }
        else if(i==k-1){
            G[arr[i]].push_back(arr[i-1]);
            G[arr[i-1]].push_back(arr[i]);
        }
        else
        {
            G[arr[i]].push_back(arr[i+1]);
            G[arr[i+1]].push_back(arr[i]);
            G[arr[i]].push_back(arr[i-1]);
            G[arr[i-1]].push_back(arr[i]);

        }
        }
    //sort(v.begin(),v.end());
int mxx=1000000000;
int res;
    FOR(i,0,p-1)
    {
        int wow=0;
        int t=BFS(arrray[i],cnt);
        if(t<mxx)
        {
            mxx=t;
            res=arrray[i];
        }
        if(t==mxx && arrray[i]<res)
        {
            mxx=t;
            res=arrray[i];
        }

    /*    for(int j=0;j<p;j++)
            wow+=vis[arrray[j]];
            if(wow==mxx && arrray[i]<res)
            {
                mxx=wow;
                res=arrray[i];
            }
            if(wow<mxx){
                mxx=wow;
                res=arrray[i];
            }
*/
    }
    pr("Krochanska is in: %d\n",res);
    FOR(i,0,101){

    G[i].clear();
    }
   // v.clear();
}
}

