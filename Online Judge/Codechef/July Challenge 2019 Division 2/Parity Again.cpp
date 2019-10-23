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
bool findParity(int x)
{
    int y = x ^ (x >> 1);
    y = y ^ (y >> 2);
    y = y ^ (y >> 4);
    y = y ^ (y >> 8);
    y = y ^ (y >> 16);

    // Rightmost bit of y holds the parity value
    // if (y&1) is 1 then parity is odd else even
    if (y & 1)
        return 1;
    return 0;

}
/*
#define P2(n) n, n ^ 1, n ^ 1, n
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n)
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n)
#define LOOK_UP P6(0), P6(1), P6(1), P6(0)

// LOOK_UP is the macro expansion to generate the table
unsigned int table[256] = { LOOK_UP };

// Function to find the parity
int findParity(int num)
{
    // Number is considered to be of 32 bits
    int max = 16;

    // Dividing the number into 8-bit
    // chunks while performing X-OR
    while (max >= 8) {
        num = num ^ (num >> max);
        max = max / 2;
    }

    // Masking the number with 0xff (11111111)
    // to produce valid 8-bit result
    return table[num & 0xff];
}
*/
int main()
{
    int test;
    sc1(test);
    while(test--)
    {
        int q;
        sc1(q);
         int a[299999]={0};
        int arr[100005];
        int k=0;
        int e=0,o=0;
        int cnt=0;
        while(q--)
        {
            int x;
            sc1(x);
            if(a[x]==0)
            {
                if(k==0)
                {
                    arr[k++]=x;
                    a[x]++;
                    if((findParity(x)==0))
                    {
                        e++;
                    }
                    else o++;

                    cnt++;
                    pr("%d %d\n",e,o);
                    continue;
                }

                arr[k++]=x;
                a[x]++;
                int ttt=k;
                for(int i=0; i<ttt-1; i++)
                {
                    int tmp;
            //        cout<<x<<" "<<arr[i]<<endl;

                    tmp=x^arr[i];
                    if(a[tmp]==0)
                    {
                        a[tmp]++;
                        arr[k++]=tmp;
                    }
                    //cout<<tmp<<endl;

                }
            }
            int tm=cnt;
            for(int i=tm; i<k; i++)
            {
                if((findParity(arr[i])==0))
                {
                    e++;
                }
                else o++;
                cnt++;
            }

            //cout<<endl;
        pr("%d %d\n",e,o);
        }

    }
}


