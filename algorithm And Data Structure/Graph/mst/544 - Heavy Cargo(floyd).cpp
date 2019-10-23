#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int main()
{
    int n,m,Q,tem=0,te=0;
    bool blank=false;
    while(sc2(n,m)){
            if(n==0 && m==0)break;
    int mat[505][505];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }
    map<string,int>mp;
    int cnt=0;
    while(m--){
        int u,v,w;
        string A,B;
        cin>>A>>B;
        cin>>w;
        if(mp[A]==0){
            cnt++;
            mp[A]=cnt;
        }
        if(mp[B]==0){
            cnt++;
            mp[B]=cnt;
        }
        u=mp[A];
        v=mp[B];
        mat[u][v]=w;
        mat[v][u]=w;
    }
    int node=n;
    for(int k=1;k<=node;k++){
        for(int i=1;i<=node;i++){
            for(int j=1;j<=node;j++){
if((mat[i][k]>mat[i][j] && mat[i][k]<inf) && (mat[k][j]>mat[i][j] && mat[k][j]<inf))
                    mat[i][j]=min(mat[i][k],mat[k][j]);
            else if(mat[i][j]==inf)mat[i][j]=min(mat[i][k],mat[k][j]);
               // mat[i][j]=mat[i][j];
            }
        }
    }
string src,des;
cin>>src>>des;
//mp[src]
pr("Scenario #%d\n",++te);
pr("%d tons\n",mat[mp[src]][mp[des]]);
pr("\n");
}
}


