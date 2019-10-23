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
#define TEST int test,te=0;sc1(test);
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
#define Mx 100005
#define mx 10005
 vector<int> searchRange(vector<int>& nums, int target){
 	int pos=-1;
 	int b=0,e=nums.size()-1;
 	vector<int>v;
 	while(b<=e){
 		int m=b+(e-b)/2;
 		if(nums[m]==target){
 			pos=m;
 			break;
		 }
		 if(nums[m]>target){
		 	e=m-1;
		 }
		 else b=m+1;
	 }
//	 cout<<pos<<endl;
	 if(pos==-1){
	 	v.push_back(-1);
	 	v.push_back(-1);
	 	return v;
	 }
	 int b1=0,e2=nums.size()-1;
	 int e1=pos-1;
	 int b2=pos+1;
	 int p1=-1,p2=-1;
	 while(b1<=e1){
	 //	cout<<b1<<" "<<e1<<endl;
	 		int m=b1+(e1-b1)/2;
	 		
 		if(nums[m]==target){
 			p1=m;
 			e1=m-1;
 		//	break;
		 }
	else if(nums[m]>target){
		 	e1=m-1;
		 }
		 else b1=m+1;
	 }
//	 cout<<p1<<endl;
	 while(b2<=e2){
	 		int m=b2+(e2-b2)/2;
 		if(nums[m]==target){
 			p2=m;
 			b1=m+1;
		 }
		 if(nums[m]>target){
		 	e2=m-1;
		 }
		 else b2=m+1;
	 }
	// cout<<p2<<endl;
	 if(p1==-1){
	 	v.push_back(pos);
	 }
	 else v.push_back(p1);
	 if(p2==-1){
	 	v.push_back(pos);
	 }
	 else v.push_back(p2);
	 
	 return v;
//	 cout<<pos<<endl;
 	
 }
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);///Beware of use it, if u use it dont use scanf or printf
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
    	int x;
    	cin>>x;
    	v.p_b(x);
    	
	}
	int t;
	cin>>t;
	vector<int>ret=searchRange(v,t);
	for(int i=0;i<ret.size();i++)
	cout<<ret[i]<<" ";
}

