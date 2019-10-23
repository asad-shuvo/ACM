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
#define Mx 100005
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
    int test;
    sc1(test);
    while(test--)
    {
        int nm[32];
        mem(nm,0);
        int n;
        sc1(n);
        vector<int>v;
        while(n--)
        {
            string a,b="";
            cin>>a;
            int arr[27];
            mem(arr,0);
            int cnt=0;
            for(int i=0; i<a.size(); i++)
            {
                if(arr[a[i]-'a']==0)
                {
                    //b+=a[i];
                    arr[a[i]-'a']=1;
                    if(a[i]=='a')
                    {
                        cnt+=1;
                    }
                    if(a[i]=='e')
                    {
                        cnt+=2;
                    }
                    if(a[i]=='i')
                    {
                        cnt+=4;
                    }
                    if(a[i]=='o')
                    {
                        cnt+=8;
                    }
                    if(a[i]=='u')
                    {
                        cnt+=16;
                    }
                }
            }
            //cout<<cnt<<endl;
            nm[cnt]++;
            v.push_back(cnt);
        }
        vector<int>num,val;
        for(int i=1;i<=31;i++){
               // cout<<i<<" "<<nm[i]<<endl;
            if(nm[i]>=1){
                num.push_back(i);
                val.push_back(nm[i]);
            }
        }
        mem(nm,0);
        ll sum=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<num.size();j++){
                int z=v[i] | num[j];
            //cout<<z<<endl;
            if(v[i]==31){
                sum+=(v.size()-1);

                break;
            }
                else if(z==31){
                    sum+=val[j];
                }
            }
        }
        pr("%lld\n",sum/2);
        //cout<<sum<<endl;
    }
}


