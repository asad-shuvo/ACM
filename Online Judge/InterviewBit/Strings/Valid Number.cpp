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
int chk(char c)
{
    if((c>='0' and c<='9') or c=='.' or c=='e' or c=='+' or c=='-')return true;

    return false;
}
int sol(string A)
{
    string b="";
    int f=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==' '){
            continue;
        }
        if(chk(A[i])==1){
            b+=A[i];
        }
        else{
                f=1;
            return 0;
        }
    }
    //cout<<b<<endl;
    int fe=0,fd=0,ff=0;
    for(int i=0;i<b.size();i++){
            if(b[i]>='0' and b[i]<='9') ff=1;
        if(i==0){
                if(b[i]=='.')fd=1;
            if(b[i]=='+' or b[i]=='-' or b[i]=='.' or(b[i]>='0' and b[i]<='9'))continue;
            return 0;
        }
        if(b[i]=='.'){
            if(fd==1)return 0;
        fd=1;
            if(i==b.size()-1 or !(b[i+1]>='0' and b[i+1]<='9')){
                return 0;
            }
            if(fe==1)return 0;
        }
        if(b[i]=='e'){
                if(i==b.size()-1)return 0;
            fe=1;
        }

    }
    if(ff==0)return 0;
    return 1;

}
int main()
{
    string a;
    cin>>a;
    cout<<sol(a)<<endl;
}


