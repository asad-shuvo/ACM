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
bool status[mx];
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
#define scL1(a) scanf("%lld",&a)
#define scL2(a,b) scanf("%lld%lld",&a,&b)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define scL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define fori(N)          for(int i = 0; i<(N); i++)
#define forj(N)         for(int j = 0; j<(N); j++)
#define fork(N)         for(int k = 0; k<(N); k++)
#define forl(N)         for(int l = 0; l<(N); l++)
#define ford(N)         for(int d = 0; d<(N); d++)
#define fori1(N)          for(int i = 1; i<=(N); i++)
#define forj1(N)         for(int j = 1; j<=(N); j++)
#define fork1(N)         for(int k = 1; k<=(N); k++)
#define ford1(N)         for(int d = 1; d<=(N); d++)
#define sqr(x)           (x)*(x)
#define TEST int test,te=0
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
#define Mx 100005
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
int main()
{
    int n;
    sc("%d",&n);
    int k,m;
    sc2(k,m);
int m2=m;
int m3=m;
    int arr[100005],ar[100005],a[100005];
    for(int i=0;i<n;i++){
    sc("%d",&arr[i]);
    ar[i]=arr[i];
    a[i]=arr[i];
    }
    sort(arr,arr+n);
    sort(ar,ar+n);
    sort(a,a+n);
    if(n==1){
            //cout<<arr[0]<<endl;
    dd ret=arr[0];
    if(m>=k){
        ret+=k;
    }
    else ret+=m;
        pr("%.20lf\n",ret);
    return 0;
    }
    dd cn=0;
    dd r=0;
    for(int i=0;i<n;i++){
        if(ar[i]==ar[n-1]){
                cn++;
            if(m>=k){
                ar[i]+=k;
                m-=k;
            }
            else if(m>0){
                ar[i]+=m;
                m=0;
            }
        }
        else {
                if(m>0){m--;ar[i]=0;}
                else cn++;

      //  cout<<ar[i]<<endl;
    }
    }
    for(int i=0;i<n;i++){
        r+=ar[i];
    }
    r=r/cn;
    cn=0;
    dd r1=0;
    m=m3;
    for(int i=0;i<n;i++){
           // cout<<a[i]<<a[i]+1<<endl;
        if((a[i]==a[n-1]) or (a[i]+1)==a[n-1]){
        //    cout<<i<< " "<<a[i]<<endl;
                cn++;
            if(m>=k){
                a[i]+=k;
                m-=k;
            }
            else if(m>0){
                a[i]+=m;
   // cout<<a[i]
                m=0;
            }
        }
        else {
                if(m>0){m--;a[i]=0;}
                else cn++;


    }
   // cout<<a[i]<<endl;
    }
    for(int i=0;i<n;i++){
        r1+=a[i];
    }
    r1=r1/cn;
//cout<<"r="<<r<<endl;
    dd ret=arr[n-1];
    int z;
    m=m2;
  for(int i=0;i<n-1;i++){
       if(m>0){
        m--;
        if(m==0){
            z=i+1;
            break;
        }
    }

  }
  //cout<<" z "<<z<<endl;
  //cout<<"m= "<<m<<endl;
   cn=0;
  if(m>0){
    if(m>=k){
        ret+=k;
    }
    else ret+=m;

   // cout<<ret<<endl;
  }
  else{

        ret=0.0;
      //  cout<<" z "<<z<<endl;
    for(int i=z;i<n;i++){
        cn++;
        ret+=arr[i];
    }
  //  cout<<cn<<endl;
    ret=ret/cn;
  }
    //cout<<"2 ret="<<ret<<endl;
  if(ret<r){
    ret=r;
  }
  if(ret<r1){
    ret=r1;
  }
// cout<<ret<<endl;
  pr("%.20lf\n",ret);
}

