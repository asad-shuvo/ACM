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
    int n;
    sc1(n);
    string a;
    cin>>a;
    int none=0,ntwo=0,nzero=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='0')nzero++;
        if(a[i]=='1')none++;
        if(a[i]=='2')ntwo++;
    }
    if(none==ntwo and ntwo==nzero)
        cout<<a<<endl;
    else
    {
        int k=n/3;
        int n0=0,n1=0,n2=0;
        if(nzero>k)
        {
            n0=nzero-k;
        }
        if(none>k)
        {
            n1=none-k;
        }
        if(ntwo>k)
        {
            n2=ntwo-k;
        }
        int m0=0,m1=0,m2=0;
        if(nzero<k)
        {
            m0=k-nzero;
        }
        if(none<k)
        {
            m1=k-none;
        }
        if(ntwo<k)
        {
            m2=k-ntwo;
        }
//        cout<<m0<<" "<<m1<<" "<<m2<<endl;
        if(m2>0)
        {
            for(int i=a.size()-1; i>=0; i--)
            {
                if(m2>0)
                {
                    if(a[i]=='0')
                    {
                        if(n0>0)
                        {
                            n0--;
                            a[i]='2';
                            m2--;
                        }
                    }
                    else if(a[i]=='1')
                    {
                        if(n1>0)
                        {
                            n1--;
                            a[i]='2';
                            m2--;
                        }
                    }
                }
            }
        }
        if(m0>0)
        {
            for(int i=0; i<a.size(); i++)
            {
                if(m0>0)
                {
                    if(a[i]=='1')
                    {
                        if(n1>0)
                        {
                            n1--;
                            a[i]='0';
                            m0--;
                        }
                    }
                    else if(a[i]=='2')
                    {
                        if(n2>0)
                        {
                            n2--;
                            a[i]='0';
                            m0--;
                        }
                    }
                }
            }
        }
        if(m1>0)
        {
            for(int i=0; i<a.size(); i++)
            {
                if(m1>0)
                {
                    if(a[i]=='2')
                    {
                        if(n2>0)
                        {
                            a[i]='1';
                            m1--;
                            n2--;
                        }
                    }
                }
            }
            if(m1>0)
            {
                for(int i=a.size()-1; i>=0; i--)
                {
                    if(m1>0)
                    {
                        if(a[i]=='0')
                        {
                            if(n0>0)
                            {
                                a[i]='1';
                                m1--;
                                n0--;
                            }
                        }
                    }
                }
            }
        }
        cout<<a<<endl;

    }
}
