#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
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
    FILE
    int test;
    sc1(test);
    getchar();
    while(test--){
    string a,b,c,d,e,k;
    vector<string>v1,v2,v3;
    getline(cin,a);
    getline(cin,b);
    c=a,d=b;
    rep(i,c.size()){
    if(c[i]=='>')c[i]=' ';
    }
    stringstream ss(c);
    while(ss>>k){
        v1.p_b(k);
    }

    string t1=v1[v1.size()-2];
    if(t1.size()>1){
   t1.erase(t1.begin()+0);
    }
    else t1=" ";
    string t2=v1[v1.size()-4];
    if(t2.size()>1){
   t2.erase(t2.begin()+0);
    }
    else t2=" ";

    string t3=v1[v1.size()-1];
    string t4=v1[v1.size()-3];

for(int i=0;i<a.size();i++){
    if(a[i]=='<' || a[i]=='>'){}
        else cout<<a[i];
}
cout<<endl;
for(int i=0;i<b.size();i++){
    if(b[i]=='.')break;
    else cout<<b[i];
}
if(t1!=" ")
    cout<<t1+t4<<" ";
else cout<<t4<<" ";

if(t2!=" ")
    cout<<t2+t3;
else cout<<t3;
cout<<endl;
/*
 for(int i=0;i<v1.size();i++){
        if(i==v1.size()-2)cout<<t1<<endl;
        else if(i==v1.size()-4)cout<<t2<<endl;

        else cout<<v1[i]<<endl;
    }
    cout<<c<<endl;
*/
}

}
