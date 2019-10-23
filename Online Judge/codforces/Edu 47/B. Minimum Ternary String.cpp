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
    string a;
    cin>>a;
    int cm[100005]= {0};
    int cnt=0;
    int f2=-1;
    int f1=-1;
    int f0=-1;

   int cnt1=0;
   int cnt2=0;
   int cnt0=0;
   string b;
   int f=0;

    for(int i=0; i<a.size(); i++)
    {
      if(a[i]=='1'&& f==0){
        b+=a[i];
      }
      else if(a[i]=='2'){
        f=1;
        b+=a[i];
      }
      else if(a[i]=='0')b+=a[i];
      else if(a[i]=='1' && f==1)
        cnt1++;
    }
    for(int i=0;i<b.size();i++){
        if(a[i]=='2'){
                f2=i;
                break;
        }
        else if(a[i]=='1')cnt1++;
        else if(a[i]=='0')cnt0++;
    }
    string c;
    for(int i=0;i<cnt0;i++){
        c+='0';
    }
    for(int i=0;i<cnt1;i++){
        c+='1';
    }
    for(int i=f2;i<b.size();i++){
        c+=b[i];
    }

    cout<<c<<endl;
    //cout<<a<<endl;
}

