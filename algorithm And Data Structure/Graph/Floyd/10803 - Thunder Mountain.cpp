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
    double mat[105][105];
    int n;
    sc1(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }
    dd x[105],y[105];
    for(int i=0;i<n;i++){
        sc("%lf%lf",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dd tmp=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
            if(tmp<=10)
                mat[i][j]=tmp;
        }
    }
    int node=n;
    for(int k=0;k<node;k++){
        for(int i=0;i<node;i++){
            for(int j=0;j<node;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
    dd sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(sum<mat[i][j])
            sum=mat[i][j];
        }
    }
    pr("Case #%d:\n",++te);
    if(sum!=inf)
    pr("%.4lf\n",sum);
    if(sum==inf)
        pr("Send Kurdy\n");
    //cout<<sum<<endl;
}
}

