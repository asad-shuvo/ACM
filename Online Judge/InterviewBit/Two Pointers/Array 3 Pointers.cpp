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

int solve(vector<int>&A,vector<int>&B,vector<int>&C)
{
    int i=0,j=0,k=0;
    int M=INT_MAX;
    while(i<A.size() and j<B.size() and k<C.size()){
           // cout<<A[i]<<" "<<B[j]<<" "<<C[k]<<endl;
        int t1=abs(A[i]-B[j]);
        int t2=abs(B[j]-C[k]);
        int t3=abs(C[k]-A[i]);
        int t=max(t1,max(t2,t3));
      //  cout<<t<<endl;
        M=min(M,t);
        if(A[i]==B[j]==C[k])return 0;

        if(A[i]<B[j] and A[i]<C[k]){
            i++;
        }
        else if(B[j]<A[i] and B[j]<C[k])j++;
        else if(C[k]<A[i] and C[k]<B[j])k++;
        else{
            int m=min(C[k],min(A[i],B[j]));
            if(m==C[k]){
                k++;
            }
            else if(m==A[i]){
                i++;
            }
            else j++;
        }


        //cout<<i<<" "<<j<<" "<<k<<endl;
    }
    return M;
}

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int>v1,v2,v3;
    fori(n1){
    int x;
    cin>>x;
    v1.push_back(x);
    }
    fori(n2){
    int x;
    cin>>x;
    v2.push_back(x);
    }
    fori(n3){
    int x;
    cin>>x;
    v3.push_back(x);
    }
    cout<<solve(v1,v2,v3)<<endl;
}

