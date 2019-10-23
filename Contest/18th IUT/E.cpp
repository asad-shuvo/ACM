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
    int test,te=0;
    sc1(test);
    while(test--){
vector<int>G[100005];
int arr[100005];

    int n,q;
    sc2(n,q);
    int i;
    F(i,1,n){
    sc1(arr[i]);
    }
    F(i,1,n-1){
    int x,y;
    sc2(x,y);
    if(x<y)
    G[x].p_b(y);
    else
    G[y].p_b(x);
    }
    for(i=1;i<=q;i++){

        int Q;
        sc1(Q);
        if(arr[Q]==1)arr[Q]=0;
        else arr[Q]=1;
    for(int p=0;p<G[Q].size();p++){
        int v=G[Q][p];
        if(arr[v]==1)arr[v]=0;
        else arr[v]=1;
    }
    }
    pr("Case %d:",++te);
    for(int z=1;z<=n;z++){
            //if(z==n)
            pr(" %d",arr[z]);
    }
    pr("\n");
    for(int k=0;k<=n;k++)G[k].clear();
}
}


