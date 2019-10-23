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
#define M 105
#define inf 1<<28
int main()
{
    int tem=0;
    while(1){

                int mat[105][105];
    for(int i=1;i<=M;i++){
        for(int j=1;j<=M;j++){
            if(i==j)mat[i][j]=0;
            else
                mat[i][j]=inf;
        }
    }


            int n,m,cnt=0;
    map<int,int>mp;
    map<int,int>mp1;

            sc2(n,m);
            int t=0;
    if(n==0 && m==0)break;
        if(mp[n]==0){mp1[n]=++t;cnt++;mp[n]=1;}
        if(mp[m]==0){mp1[m]=++t;cnt++;mp[m]=1;}
        n=mp1[n];
        m=mp1[m];
                mat[n][m]=1;
    while(sc2(n,m)){
        if(n==0 && m==0)break;
                if(mp[n]==0){mp1[n]=++t;cnt++;mp[n]=1;}
        if(mp[m]==0){mp1[m]=++t;cnt++;mp[m]=1;}
         n=mp1[n];
        m=mp1[m];
        mat[n][m]=1;
    }
   // cout<<cnt<<endl;
    for(int k=1;k<=cnt;k++){
        for(int i=1;i<=cnt;i++){
            for(int j=1;j<=cnt;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
    dd sum=0;
     for(int i=1;i<=cnt;i++){
            for(int j=1;j<=cnt;j++){
                    sum+=mat[i][j];
                //cout<<mat[i][j]<<" ";//=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
            //cout<<endl;
        }
        pr("Case %d: average length between pages = %.3lf clicks\n",++tem,sum/(cnt*(cnt-1)));
}
}

