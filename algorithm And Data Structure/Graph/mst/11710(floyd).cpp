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
    int n,m;
    while(sc("%d%d",&n,&m)&& n>0 && m>0){
           // e.clear();
           int mat[405][405];
    map<string,int>mp;
    for(int i=1;i<=n;i++){
        string A;
        cin>>A;
        mp[A]=i;
    }
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }

    for(int i=1;i<=m;i++){
        string A,B;
        int w;
        cin>>A>>B>>w;
        int u=mp[A];
        int v=mp[B];
        w=min(mat[u][v],w);
        mat[u][v]=w;
        mat[v][u]=w;
    }
    string src;
    cin>>src;
    int sr=mp[src];

    int node=n;
    for(int k=1;k<node;k++){
        for(int i=1;i<node;i++){
            for(int j=1;j<node;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0,f=1;
    for(int i=1;i<=n;i++){
        if(mat[sr][i]==inf)f=1;
        sum+=mat[sr][i];
        }
    if(f==1)pr("Impossible\n");
    else
    pr("%d\n",sum);
}
}


