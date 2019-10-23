#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000005
ll status[mx];
int main()
{
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


    ll n,a;
    status[1]=1;
    cin>>n;
//    sieve();
    while(n--){
        cin>>a;
        ll d=sqrt(a);
        if(d*d==a){
     //           cout<<d<<endl;

            if(status[d]==0){
   //                 cout<<status[d]<<endl;
                pr("YES\n");
            }
                else pr("NO\n");
        }
        else pr("NO\n");
    }
}

