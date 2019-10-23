#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
#define mx 4040
vector<int>G[mx];
vector<int>ant;
vector<char>tat1,tat2;
int visit[mx],parent[mx];
int BFS(int source,int destination)
{
    queue<int>q;
    q.push(source);
    visit[source]=1;
    while(!q.empty())
    {
        int u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visit[v]==0)
            {
                visit[v]=1;
                parent[v]=u;
                if(v==destination)
                    return 1;
                q.push(v);
            }
        }
    }
    return 0;
}
int main()
{
//f_i
//f_o
    int n,test=0;


    while(scanf("%d",&n)!=EOF){
             memset(G, 0 ,sizeof(G));
    memset(visit, 0 ,sizeof(visit));
    memset(parent, 0 ,sizeof(parent));
            test++;
    if(test>1)
        cout<<endl;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        int t=(a[0]-'A'+10);
    int t1=t%10;
    int t2=t/10;
    int tt=a[1]-'A'+10;
    int tt1=tt%10;
    int tt2=tt/10;
    int tak1=t2;
    tak1=tak1*10+t1;
    tak1=tak1*10+tt2;
    tak1=tak1*10+tt1;
  //  printf("%d\n",tak1);
    int tb=(b[0]-'A'+10);
    int tb1=tb%10;
    int tb2=tb/10;
    int ttb=b[1]-'A'+10;
    int ttb1=ttb%10;
    int ttb2=ttb/10;
    int tak2=tb2;
    tak2=tak2*10+tb1;
    tak2=tak2*10+ttb2;
    tak2=tak2*10+ttb1;
    //printf("%d\n",tak2);
    int x=tak1;
    int y=tak2;
      //  int x=(a[0]-'A'+10)*10+(a[1]-'A'+10);
        //int y=(b[0]-'A'+10)*10+(b[1]-'A'+10);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    string a1,b1;
    cin>>a1>>b1;
      int t=(a1[0]-'A'+10);
    int t1=t%10;
    int t2=t/10;
    int tt=a1[1]-'A'+10;
    int tt1=tt%10;
    int tt2=tt/10;
    int tak1=t2;
    tak1=tak1*10+t1;
    tak1=tak1*10+tt2;
    tak1=tak1*10+tt1;
  //  printf("%d\n",tak1);
    int tb=(b1[0]-'A'+10);
    int tb1=tb%10;
    int tb2=tb/10;
    int ttb=b1[1]-'A'+10;
    int ttb1=ttb%10;
    int ttb2=ttb/10;
    int tak2=tb2;
    tak2=tak2*10+tb1;
    tak2=tak2*10+ttb2;
    tak2=tak2*10+ttb1;
    int x1=tak1;
    int y1=tak2;
         //x1=(a1[0]-'A'+10)*10+(a1[1]-'A'+10);
        //int y1=(b1[0]-'A'+10)*10+(b1[1]-'A'+10);
        if(BFS(x1,y1)==0)
            printf("No route\n");
        else{
        ant.push_back(y1);
        int tpr1=y1;
        while(parent[tpr1]!=x1)
        {
            tpr1=parent[tpr1];
            ant.push_back(tpr1);
        }
        ant.push_back(x1);
        for(int i=ant.size()-1;i>=0;i--)
        {
            int p1=ant[i];
            int p2=p1%10;int p3=p1/10;
            int p4=p3%10;int p5=p3/10;
            int p6=p5%10;int p7=p5/10;
            int tak=p4*10+p2;
            int tak2=p7*10+p6;
            tat1.push_back(tak2+'A'-10);
            tat2.push_back(tak+'A'-10);
           // printf("%c%c ",tak2+'A'-10,tak+'A'-10);
        }
        cout<<tat1[0]<<tat2[0]<<" "<<tat1[1]<<tat2[1]<<endl;
        for(int i=2;i<tat1.size();i++){
           cout<<tat1[i-1]<<tat2[i-1]<<" "<<tat1[i]<<tat2[i]<<endl;
        }
        tat1.clear();
        tat2.clear();
        ant.clear();
        }

}}
