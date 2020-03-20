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
#define all(r)(r).begin(),(r).end()
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
#define TEST int test,te=0;cin>>test;
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
#define Mx 100005
#define mx 10005
#include <iostream>
#include <bitset>
using namespace std;
 
// macros to generate the lookup table (at compile-time)
#define P2(n) n, n^1, n^1, n
#define P4(n) P2(n), P2(n^1), P2(n^1), P2(n)
#define P6(n) P4(n), P4(n^1), P4(n^1), P4(n)
#define FIND_PARITY P6(0), P6(1), P6(1), P6(0)
 
// lookup-table to store the parity of each index of the table
// The macro FIND_PARITY generates the table
unsigned int lookup[256] = { FIND_PARITY };
 
// Function to find parity of x
int findParity(int x)
{
	// print lookup table (parity of integer i)
	// for (int i = 0; i < 256; i++)
	//	cout << "Parity of " << i << " is " << lookup[i] << "\n";
 
	// assuming 32-bit(4 byte) integer, break the integer into 
	// 16-bit chunks and take their XOR
	x ^= x >> 16;
	
	// Again split 16-bit chunk into 8-bit chunks and take their XOR
	x ^= x >> 8;
	
	// Note mask used 0xff is 11111111 in binary
	return lookup[x & 0xff];
}

// Compute parity of a number using lookup table

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);///Beware of use it, if u use it dont use scanf or printf
    TEST
    while(test--){
    	int n,q;
    	cin>>n>>q;
    	int odd=0,even=0;
    	while(n--){
    	
    		int x;
    		cin>>x;
    			//cout<<table[x]<<endl;
//    		int cnt=0;
//    		while(x>0){
//    			int t=1&x;
//    			if(t==1)cnt++;
//    			x>>=1;
//			}
//int cnt=Parity(x);
//			if(cnt%2==0)even++;
//			else odd++;
if(findParity(x)==1)even++;
else odd++;
		}
		while(q--){
			int x;
			cin>>x;
//				int cnt=0;
//    		while(x>0){
//    			int t=1&x;
//    			if(t==1)cnt++;
//    			x>>=1;
//			}
//int cnt=Parity(x);

			if(findParity(x)==1){
				cout<<even<<" "<<odd<<endl;
			}
			else cout<<odd<<" "<<even<<endl;
		}
	}
}

