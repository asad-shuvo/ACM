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
double sol(vector<int>&A, vector<int>&B)
{
    int sz1=A.size();
    int sz2=B.size();
    int b,e;
    if(A.size()>0 and B.size()>0){
     b=min(A[0],B[0]);
    e=max(A[sz1-1],B[sz2-1]);
    }
     else{
        if(A.size()==0){
            b=B[0];
            e=B[sz2-1];
        }
        if(B.size()==0){
            b=A[0];
            e=A[sz1-1];
        }
     }

    int m;
    m=((sz1+sz2)+1)/2;
    int ev=0;
    if((sz1+sz2)%2==0){
        //m--;
        ev=1;
    }


    double plc1;
    int b1=b,e1=e;
    if(b==e)return (double)b;
    while(b<e){
        int mid=b+(e-b)/2;
        int p1=0,p2=0;
        if(sz1>0)
         p1=upper_bound(A.begin(),A.end(),mid)-A.begin();
        if(sz2>0)
         p2=upper_bound(B.begin(),B.end(),mid)-B.begin();
        //cout<<mid<<endl;
        //cout<<p1<<" "<<p2<<endl;
        if(p1+p2==m){
            plc1=mid;
            break;
        }
        else if(p1+p2<m){
            b=mid+1;
        }
        else e=mid;

    }
cout<<plc1<<endl;
   // cout<<plc<<endl;
    if(ev==0)return plc1;
    m++;
    b=b1,e=e1;
    double plc2;
  //  cout<<m<<endl;
while(b<e){
        int mid=b+(e-b)/2;
         int p1=0,p2=0;
        if(sz1>0)
         p1=upper_bound(A.begin(),A.end(),mid)-A.begin();
        if(sz2>0)
         p2=upper_bound(B.begin(),B.end(),mid)-B.begin();
        //cout<<mid<<endl;
        //cout<<p1<<" "<<p2<<endl;
        if(p1+p2==m){
            plc2=mid;
            break;
        }
       else if(p1+p2<m){
            b=mid+1;
        }
        else e=mid;
//cout<<b<<" "<<e<<endl;
    }
    cout<<plc1<<" "<<plc2<<endl;

    double ret=(plc1+plc2)/2;
    return ret;
}
int main()
{
    int n,m;
    sc2(n,m);
    vector<int>v1,v2;
    fori(n){
    int t;
    sc1(t);
    v1.push_back(t);
    }
    fori(m){
    int t;
    sc1(t);
    v2.push_back(t);
    }
    cout<<sol(v1,v2)<<endl;
}

