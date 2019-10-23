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
#define Mx 100005
#define mx 2*100005
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)

int main()
{
    int n;
    sc1(n);
    string a;
    cin>>a;
    int R1=0,G1=0,B1=0;
    int R2=0,G2=0,B2=0;
    int R3=0,G3=0,B3=0;
    for(int i=0; i<a.size(); i=i+3)
    {
        if(a[i]=='R')R1++;
        if(a[i]=='G')G1++;
        if(a[i]=='B')B1++;
    }
    for(int i=1; i<a.size(); i=i+3)
    {
        if(a[i]=='R')R2++;
        if(a[i]=='G')G2++;
        if(a[i]=='B')B2++;
    }
    for(int i=2; i<a.size(); i=i+3)
    {
        if(a[i]=='R')R3++;
        if(a[i]=='G')G3++;
        if(a[i]=='B')B3++;
    }
    int ff1,cnt=0;
    char c;
    if(R1>=G1 and R1>=B1)
    {
        ff1=1;
        c='R';
    }
    if(G1>R1 and G1>=B1)
    {
        ff1=2;
        c='G';
    }
    if(B1>G1 and B1>R1)
    {
        ff1=3;
        c='B';
    }
    for(int i=0; i<a.size(); i+=3)
    {
        if(a[i]!=c)
        {
            cnt++;
            a[i]=c;
        }
    }
    int ff2;
    if(ff1==1 and G1>=B1)
    {
        ff2=2;
        c='G';
    }
    else if(ff1==1 and B1>G1)
    {
        ff2=3;
        c='B';
    }
    if(ff1==2 and R1>=B1)
    {
        ff2=1;
        c='R';
    }
    if(ff1==2 and B1>R1)
    {
        ff2=3;
        c='B';
    }
    if(ff1==3 and R1>=G1)
    {
        ff2=1;
        c='R';
    }
    if(ff1==3 and G1>R1)
    {
        ff2=2;
        c='G';
    }
    for(int i=1; i<a.size(); i+=3)
    {
        if(a[i]!=c)
        {
            cnt++;
            a[i]=c;
        }
    }
    int ff3;
    if((ff2==1 and ff1==2) or(ff1==1 and ff2==2) )
    {
        ff3=3;
        c='B';
    }
    else if((ff2==1 and ff1==3)or (ff1==1 and ff2==3))
    {
        ff3=2;
        c='G';
    }
    else if((ff2==2 and ff1==3) or (ff1==2 and ff2==3))
    {
        ff3=1;
        c='R';
    }

    for(int i=2; i<a.size(); i+=3)
    {
        if(a[i]!=c)
        {
            cnt++;
            a[i]=c;
        }
    }

    cout<<cnt<<endl<<a<<endl;

}

