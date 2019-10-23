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
#define mx 10005
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)
int main()
{
 ll  n,k,m;
 sc("%lld%lld%lld",&n,&k,&m);
 ll arr[Mx];
 dd cnt=0;
 dd sum;
 for(ll i=0;i<n;i++)sc("%lld",&arr[i]);
 sort(arr,arr+n);
 ll MM=arr[n-1];
// for()

 if(m>=n){
    ll t=arr[n-1];
    ll op=n-1;
    ll opp=m-op;
    if(opp<k){
        k=opp;
    }
    t+=k;
    sum=t;
 }

 else{
   // ll t=n-m;
   dd sum1=0;
   dd s=0;
ll c=0;
dd MMM=-1.0;
for(ll i=0;i<m;i++){
        if(arr[i]!=MM)s++;
        if(arr[i]==MM){
            cnt++;
            sum1+=arr[i];
           // cout<<sum1<<endl;
        }
        if(arr[i]==MM and s<m){
                c=(m-s);
                if(c>k)c=k;
            s+=c;
            sum1+=c;
                       // cout<<sum1<<endl;

        }

}
    for(ll i=m;i<n;i++){
        sum1+=arr[i];
                    //cout<<sum1<<endl;

        cnt++;
    }
   // cout<<sum1<<" "<<cnt<<endl;
    sum=(sum1/cnt);
    //cout<<sum<<endl;
    if(sum>MMM)MMM=sum;
    sum1=0,cnt=0,c=0,s=0;
    for(ll i=0;i<m;i++){
        if(arr[i]!=MM and arr[i]!=MM-1)s++;
        if(arr[i]==MM or arr[i]==MM-1){
            cnt++;
            sum1+=arr[i];
    //        cout<<sum1<<endl;
        }
        if(arr[i]==MM and s<m){
                c=(m-s);
                if(c>k)c=k;
            s+=c;
            sum1+=c;
           // cout<<s<<endl;
        }
        if(arr[i]==MM-1 and s<m){
            c=(m-s);
            if(c>k)c=k;
            s+=c;
            sum1+=c;
  //                      cout<<s<<endl;
//cout<<sum1<<endl;
        }

}
    for(ll i=m;i<n;i++){
        sum1+=arr[i];
       // cout<<sum1<<endl;
        cnt++;
    }
    //cout<<sum1<<" "<<cnt<<endl;
    sum=(sum1/cnt);
    //cout<<sum<<endl;
    if(sum>MMM)MMM=sum;

    sum=MMM;
//cout<<sum<<endl;
 }
     pr("%.10lf\n",sum);


}

