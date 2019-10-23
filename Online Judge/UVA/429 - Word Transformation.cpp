#include <bits/stdc++.h>
using namespace std;
#define mx 210
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[mx];
int vis[mx];
int dis[mx];
void BFS(int source)
{
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    queue<int>q;
        vis[source]=0;
    q.push(source);
    dis[source]=0;
    while(!q.empty()){
    int u=q.front(); q.pop();
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis[v]==0){
            vis[v]=1;
            dis[v]=dis[u]+1;
            q.push(v);
        }
    }
    }
}
int main()
{
//    f_i
  //  f_o
    string a,b,c;
    int test,m=0;
    scanf("%d",&test);
    while(test--){
        m++;
            if(m>1)
            cout<<endl;
            for(int i=0;i<mx;i++)
            G[i].clear();
    vector<string>s;
    while(cin>>a){
        if(a[0]=='*') break;
        s.push_back(a);
    }
  //  for(int i=0;i<s.size();i++)
    //    cout<<s[i]<<" ";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i].size()==s[j].size()){
               int f=0,k,p;
string               g1=s[i];
       string        g2=s[j];
               for( k=0,p=0;k<g1.size();k++,p++){
                if(g1[k]!=g2[p])
                    f++;
               }
               if(f==1){
                G[i].push_back(j);
                G[j].push_back(i);
               }
            }
        }
    }
    getchar();
string st,en,sttt;
int source,destination;
while(getline(cin,sttt)){
        if(sttt.size()==0) break;
        stringstream ss(sttt);
        string ag;
        vector<string>vc;
        while(ss>>ag){
            vc.push_back(ag);
        }
        st=vc[0];
        en=vc[1];
          //      cout<<vc.size()<<endl;

      //  cout<<st<<endl;
        //cout<<en<<endl;
       // vc.clear();
//cin>>en;
for(int i=0;i<s.size();i++){
    if(st==s[i])
        source=i;
    if(en==s[i])
        destination=i;
}
BFS(source);
cout<<st<<" "<<en<<" "<<dis[destination]<<endl;
}
}
}
