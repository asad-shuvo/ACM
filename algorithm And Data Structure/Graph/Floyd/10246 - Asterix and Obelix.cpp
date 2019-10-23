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
    int n,r,q;
    sc3(n,r,q);
    int city[1000];
    for(int i=1;i<=n;i++)sc1(city[i]);
    int mat[1000][100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            if(i==j)mat[i][j]=0;
        else mat[i][j]=inf;
        }
    }
    while(r--){
        int u,v,w;
        sc3(u,v,w);
        mat[u][v]=w;
        mat[v][u]=w;
    }
    int node=n;
int    mat1[1000][100];
    for(int k=1;k<=node;k++){
        for(int i=1;i<=node;i++){
            for(int j=1;j<=node;j++){
                    int ij=max(city[i],city[j]);
                    int ijk=max(ij,city[k]);
                   // mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                   if((mat[i][j]+ij)>(mat[i][j]+mat[k][j]+ijk)){
                    mat[i][j]=mat[i][j]+mat[k][j];
                    mat1[i][j]=(mat[i][j]+mat[k][j]+ijk);
                   }
                   else
                   {
                       mat[i][j]=mat[i][j];
                    mat1[i][j]=mat[i][j]+ij;
                   }

                //mat1[i][j]=min((mat[i][j]+ij),(mat[i][k]+mat[k][j]+ijk));
            }
        }
    }
    while(q--){
        int u,v;
        sc2(u,v);
        cout<<mat1[u][v]<<endl;
    }
}

