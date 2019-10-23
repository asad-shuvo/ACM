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
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{
    ll i,j,k,l,m,n,arr[100005],take[100005];
    ll minn=1000000000000,f=0,t=0;
    sc("%lld%lld",&n,&k);
    for(i=0;i<n;i++)
    {
       sc("%lld",&arr[i]);
        minn=min(minn,arr[i]);
    }
    for(i=0;i<n;i++){
        int vl=arr[i]-minn;
        if(vl%k){ cout<<"-1"<<endl;f=1; break;}
        else{
            t+=(vl/k);
        }
    }
    if(f!=1)
        cout<<t<<endl;

}

