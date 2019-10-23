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
    int test;
    sc1(test);
    while(test--){
    sc2(n,m);
     //   if(n==0 && m==0)break;
        int mat[505][505],tme[505][505];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==j){mat[i][j]=0;tme[i][j]=0;}
                else {mat[i][j]=inf;tme[i][j]=inf;}
            }
        }

        while(m--)
        {
            int u,v,w,t;
            sc3(u,v,t);
            sc1(w);
            if((tme[u][v]==inf) || (t<tme[u][v]) || (t==tme[u][v] && w<mat[u][v])){
                tme[u][v]=t;
                tme[v][u]=t;
                mat[u][v]=w;
                mat[v][u]=w;
            }
        }

        if(blank)pr("\n");
        blank=true;
        int node=n;
        for(int k=1; k<=node; k++)
        {
            for(int i=1; i<=node; i++)
            {
                for(int j=1; j<=node; j++)
                {
                    if((tme[i][j]>(tme[i][k]+tme[k][j])))
                    {
                        mat[i][j]=mat[i][k]+mat[k][j];
                        tme[i][j]=tme[i][k]+tme[k][j];
                    }
                    else if(tme[i][j]==(tme[i][k]+tme[k][j])){
                        if(mat[i][j]>(mat[i][k]+mat[k][j])){
                            mat[i][j]=mat[i][k]+mat[k][j];
                        }
                    }
                }
            }
        }
        int q;
        sc1(q);
        while(q--){
        int src,des;
        cin>>src>>des;
        if(mat[src][des]==inf)pr("No Path.\n");
//mp[src]
        //pr("Scenario #%d\n",++te);
        else
        pr("Distance and time to reach destination is %d & %d.\n",mat[src][des],tme[src][des]);
        //pr("\n");
        }
    }
}



