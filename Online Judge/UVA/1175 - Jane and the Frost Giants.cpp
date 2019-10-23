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
#define pii pair<int,int>
#define mp make_pair
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
#define mx 1005
int vis1[mx][mx];
int vis2[mx][mx];
int vis3[mx][mx];
queue<pii>Q;
//int janvis[mx][mx];
int firevis[mx][mx];
int row,col;
int firedis[mx][mx];
int janedis[mx][mx];
void BFS1()
{
    while(!Q.empty()){
        pii top=Q.front();
        Q.pop();
        for(int k=0;k<4;k++){
            int tx=top.first+fx[k];
            int ty=top.second+fy[k];
            if(tx>=0 && ty>=0 && tx<row && ty<col && vis1[tx][ty]==0)
            {
                vis1[tx][ty]=1;
                    firedis[tx][ty]=firedis[top.first][top.second]+1;
                Q.push(pii(tx,ty));
            }
        }
    }
}
int BFS2(int px,int py)
{
    queue<pii>q;
    q.push(pii(px,py));
    vis2[px][py]=1;
    int take=0;
      if(px==0 || px==row-1 || py==0 || py==col-1){
                    take= janedis[px][py];
                    return take+1;
                }
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int tx=top.first+fx[k];
            int ty=top.second+fy[k];
            if(tx>=0 && ty>=0 && tx<row && ty<col && vis2[tx][ty]==0)
            {
                vis2[tx][ty]=1;
                janedis[tx][ty]=janedis[top.first][top.second]+1;

                if((janedis[tx][ty]<firedis[tx][ty]) || firedis[tx][ty]==0){
                q.push(pii(tx,ty));
                                if(tx==0 || tx==row-1 || ty==0 || ty==col-1){
                    take= janedis[tx][ty];
                    return take+1;
                }

                }
            }
        }
    }
    return take;
}
int main()
{
   //
   //FILE
    int test,m=0;
    sc("%d",&test);
    while(test--){
    string a;
    int x1,y1,x2=-1,y2=-1;
    sc("%d%d",&row,&col);
VI v1,v2;
    memset(vis1,0,sizeof(vis1));
    memset(vis2,0,sizeof(vis2));
    memset(firedis,0,sizeof(firedis));
    memset(janedis,0,sizeof(janedis));
    //memset(vis2,0,sizeof(firevis));
    for(int i=0;i<row;i++){
        cin>>a;
        for(int j=0;j<a.size();j++){
            if(a[j]=='J'){
                x1=i;
                y1=j;
            }
            if(a[j]=='#'){ vis1[i][j]=1; vis2[i][j]=1;}
            if(a[j]=='F'){
               Q.push(mp(i,j));
                vis1[i][j]=1;
                firedis[i][j]=0;
            }
        }
    }
    BFS1();
    int res=BFS2(x1,y1);
    pr("Case %d: ",++m);
   if(res==0)
    pr("IMPOSSIBLE\n");
   else
    pr("%d\n",res);
}

    //cout<<firedis[3][2]<<endl;
}


