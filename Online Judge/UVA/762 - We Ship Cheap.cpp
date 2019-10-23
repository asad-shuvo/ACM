#include <bits/stdc++.h>
using namespace std;
vector<int>G[1000],v1,v2,v3;
int vis[10000],n;
int bfs(int source,int des){
        v1.push_back(source);
        //for(int loop=1;loop<=n;loop++){
            for(int i=0;i<v1.size();i++){
                int u=v1[i];
                for(int j=0;j<G[u].size();j++){
                    int v=G[u][j];
                    if(vis[v]==0){
                        vis[v]=1;
                        v3.push_back(v);
                      //  cout<<v;
                        v2.push_back(v);

                    }

            }
            if(v2.empty()){
                v1.clear();
                v2.clear();
                   break;
            }
            else {
                v1.clear();
                v1=v2;
                v2.clear();
                }
        }

}
int main()
{
    int i,j,k,l,m;
    cin>>n;
    memset(vis , 0 ,sizeof(vis));
    string a,b,c,d;
    int x,x1,y,y1;
    while(n--){

        cin>>a>>b;
        x=0,y=0;
        for(i=0;i<a.size();i++){
            x=x*10+a[i]-'A'+1;
            y=y*10+b[i]-'A'+1;
        }
        cout<<x<<" "<<y<<endl;
        //cout<<x<<" "<<y<<endl;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cin>>c>>d;
     x1=0,y1=0;
        for(i=0;i<c.size();i++){
            x1=(x1*10+c[i])-'A'+1;
            y1=y1*10+d[i]-'A'+1;
        }
   bfs(x1,y1);
    for(i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";
}
