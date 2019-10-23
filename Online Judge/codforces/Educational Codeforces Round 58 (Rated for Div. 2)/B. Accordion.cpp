#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define pii pair<int,int>
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
    string a;
    cin>>a;
    int ob=-1,cb=-1,fc=-1,sc=-1,ls,nfc,nsc;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='[')
        {
            if(ob==-1)
                ob=1;
        }
        if(a[i]==':')
        {
            if(ob==1)
            {
                if(fc==-1)
                {
                    nfc=i;
                    fc=1;
                }
                else if(fc==1)
                {
                    nsc=i;
                    sc=1;
                }
            }
        }
        if(a[i]==']')
        {
            ls=i;
            if(ob==1 and fc==1 and sc==1)
            {
                cb=1;
            }
        }
    }
    //cout<<ls<<" "<<nfc<<" "<<nsc<<endl;
    if(ob==1 and fc==1 and sc==1 and cb==1)
    {
int cnt=0,tot=0,llc,ffc;
int b2=0,b1=0;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]==']')
        {
            b2=1;
        }
        if(a[i]==':' and b2==1){
            llc=i;
            break;
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]=='[')
        {
            b1=1;
        }
        if(a[i]==':' and b1==1){
            ffc=i;
            break;
        }
    }
    for(int i=ffc;i<=llc;i++){
        if(a[i]=='|')tot++;
    }
    pr("%d\n",tot+4);

    }
    else pr("-1\n");
}


