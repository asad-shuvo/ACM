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
//#define pr printf
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
struct node{
	int f,s;
//	node(int a,int b){
//		f=a;
//		s=b;
//	}
};
int r=8,c=8;
int vis[65][65];
pair<int,int>pr;
vector<pair<int,int> >arr;
int k=0;
void fun(int i,int j){
	if(i<=0 or j<=0 or i>r or j>c)return;
	if(vis[i][j]==1)return;
	vis[i][j]=1;
	arr.push_back(pair<int,int>(i,j));
//	arr[k].f=i;
//	arr[k].s=j;
//	k++;
	fun(i+1,j-1);
	fun(i-1,j+1);
	fun(i+1,j+1);
	fun(i-1,j-1);
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);///Beware of use it, if u use it dont use scanf or printf
  //  fun(1,1);
  // for(int i=0;i<arr.size();i++)cout<<arr[i].first<<" "<<arr[i].second<<endl;
  //  cout<<arr.size()<<endl;
    TEST
    while(test--){
    	int r0,c0;
    	cin>>r0>>c0;
    //	map<pair<int,int> ,int>mp;
    	mp[pair<int,int>(r0,c0)]=1;
    	for(int i=1;i<=31;i++){
    		int s=r0+c0;
    		int m=abs(r0-c0);
    		int t0,t1,f=0;
    		for(int j=0;j<arr.size();j++){
//    			node tmp=arr[j];
    			int a=arr[j].first;
    			int b=arr[j].second;
    			int P=a+b;
    			int M=abs(a-b);
    			
    			if( P==s or M==m){
    				if(mp[arr[j]]==0){
    					mp[arr[j]]=1;
    					cout<<arr[j].first<<" "<<arr[j].second<<endl;
    					r0=arr[j].first;
    					c0=arr[j].second;
    					f=1;
    					break;
					}
					else{
						t0=arr[j].first;
						t1=arr[j].second;
					}
				}
				if(j==arr.size()-1 and f==0){
					r0=t0;
					c0=t1;
				}
			}
		}
	}
}

