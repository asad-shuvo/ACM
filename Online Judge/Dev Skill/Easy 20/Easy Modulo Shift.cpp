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
    int test;
    sc1(test);
    while(test--){
        int n,m;
        sc2(n,m);
        int a[100005];
        int A,B,C;
        sc3(a[1],A,B);
        sc1(C);
        vector<int> v;
        v.p_b(a[1]);
        for(int i=2;i<=n;i++){
            a[i]=(((a[i-1]*A)+B)%C);
            v.p_b(a[i]);
        }
        int cnt=0;
        /* for(int i=0;i<v.size();i++)
            {
                if(v[i]%m==0)cnt++;
            }*/
        int cm[100005];
        int mxxx=-1;

        for(int i=0;i<n;i++){
                int tmp=v[0];
        int sum=0;

        int s=0;
                for(int j=0;j<v.size();j++){
                        sum=0;
                for(int k=j;k<v.size();k++){
                    sum+=v[k];
                   // cout<<sum<<" ";
                    if(sum%m==0)
                        s++;
                }
                }

                cm[i]=(s);
                if(cm[i]>mxxx)mxxx=cm[i];
        v.erase(v.begin()+0);
        v.p_b(tmp);
        }
        //cout<<cnt<<endl;
        //cout<<mxxx<<endl;
       int cn=0;
       for(int i=0;i<n;i++){
           // cout<<cm[i]<<endl;
        if(cm[i]==mxxx)cn++;
       }
        pr("%d\n",cn);
    }
}

