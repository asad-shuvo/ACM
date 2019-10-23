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
    int node,te=0;
    while(sc1(node)&&node>0){
    int mat[node+1][node+1];
     for(int i=1;i<=node;i++){
        for(int j=1;j<=node;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }
int nxt[node+1][node+1];

    for(int i=1;i<=node;i++){
        int m;
        sc1(m);
        while(m--){
            int u,w;
            sc2(u,w);
            mat[i][u]=w;
            nxt[i][u]=u;
        }
    }
    int src,des;
    sc2(src,des);
int t1=src,t2=des;
    for(int k=1;k<=node;k++){
        for(int i=1;i<=node;i++){
            for(int j=1;j<=node;j++){
                    if(mat[i][k]+mat[k][j]<mat[i][j]){
                mat[i][j]=mat[i][k]+mat[k][j];
                nxt[i][j]=nxt[i][k];
            }
        }
    }
    }
    vector<int>v;
    v.p_b(src);
    while(src!=des){
         src=nxt[src][des];
         v.p_b(src);
    }
    pr("Case %d: Path =",++te);
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    pr("; %d second delay\n",mat[t1][t2]);
}

}
