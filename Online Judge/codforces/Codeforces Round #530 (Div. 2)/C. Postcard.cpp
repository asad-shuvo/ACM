#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define llu unsigned long long
#define Mx 100005
#define mx 1005
#define inf 1<<28
#define gama 0.57721566490
#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
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
ll BM( ll a , ll b , ll m )
{
    if ( b == 0 ) return 1 ;
    ll x = BM(a,b/2,m);
    x = (( x % m) * (x % m))%m;

    if( b % 2 ) x = (( x % m) * (a %m)) % m ;
    return x ;
}
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
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
int main()
{
    string a,b="";
    int sz;
    cin>>a;
    sc1(sz);
    int st=0,snf=0,als=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='?')st++;
        else if(a[i]=='*')snf++;
        else als++;
    }

    int dff=0;
    if(als==sz)
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!='?' and a[i]!='*')
                b+=a[i];
        }
    }
    if(als>sz)
    {
        dff=als-sz;
        if(st+snf<dff)
            pr("Impossible\n");
        else
        {

            int k=0;
            for( k=0; k<a.size(); k++)
            {
                if(dff==0)break;

                if(a[k+1]!='?' and a[k+1]!='*' and a[k]!='?' and a[k]!='*')
                {
                    b+=a[k];
                }
                else if(a[k+1]=='?' or a[k+1]=='*')
                    dff--;
            }
            for(int z=k;z<a.size();z++)
            {
                if(a[z]!='?' and a[z]!='*')
                    b+=a[z];
            }
        }
    }
    else if(sz>als){
        if(snf==0)
            pr("Impossible\n");
        else{
            int df=sz-als;
            char c;
            int pls;
            for(int i=0;i<a.size();i++){
                if(a[i]=='*'){
                    c=a[i-1];
                 pls=i-1;
                 break;
                }
            }
            for(int i=0;i<=pls;i++){
if(a[i]!='?' and a[i]!='*')
                b+=a[i];
            }
            for(int i=0;i<df;i++){
                b+=c;
            }
            for(int i=pls+1;i<a.size();i++)
            {
                if(a[i]!='?' and a[i]!='*')
                b+=a[i];
            }
        }
    }
    cout<<b<<endl;
}

