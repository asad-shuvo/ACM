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
int fx[]={1,1,1,0,0,-1,-1,-1};
int fy[]={0,1,-1,1,-1,0,1,-1};
#define mx 1000
#define pii pair<int,int>
#define mp make_pair
queue<pii>Q;
int vis[mx][mx],dis[mx][mx];
void BFS(int row,int col)
{
    while(!Q.empty()){
        pii top=Q.front();
        Q.pop();
        for(int k=0;k<8;k++){
            int tx=top.first+fx[k];
            int ty=top.second+fy[k];
            if(tx>=0 && ty>=0 && tx<row && ty<col)
            {
                    dis[tx][ty]=dis[tx][ty]+1;
            }
        }
    }
}
int main()
{
    int row,col,te=0;
    while(sc("%d%d",&row,&col)&&row>0 && col>0){
            if(te>0)
            cout<<endl;
    memset(dis,0,sizeof(dis));
    memset(vis,0,sizeof(vis));
    //getchar();
    for(int i=0;i<row;i++){
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++){
            if(a[j]=='*'){
                Q.push(mp(i,j));
                vis[i][j]=-1;
            }

        }
    }
    BFS(row,col);
    pr("Field #%d:\n",++te);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(vis[i][j]==-1)
                pr("*");
            else
            pr("%d",dis[i][j]);
        }
        cout<<endl;
    }

}
}

