#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
#define inf 1<<28
int main()
{
    int n,m,te=0,test;
    sc1(test);
    while(test--){
          sc2(n,m);
    int node=n;
        int mat[105][105];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }
    int src;int des;
    for(int i=1;i<=m;i++){
        int u,v,w;
        sc3(u,v,w);
        w=min(mat[u][v],w);
        mat[u][v]=w;
        mat[v][u]=w;
    }
    for(int k=1;k<=node;k++){
        for(int i=1;i<=node;i++){
            for(int j=1;j<=node;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
    //cout<<src<<" "<<des<<endl;
if(mat[1][n]==inf)pr("Case %d: Impossible\n",++te);
else
    pr("Case %d: %d\n",++te,mat[1][n]);
}

}

