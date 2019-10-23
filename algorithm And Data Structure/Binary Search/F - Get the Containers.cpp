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

int main()
{
    ll  n,m,arr[10000];
    ll  test,m1=0;
    sc("%lld",&test);
    while(test--){
    ll  i,j,total=0;
    ll high=0,low=0;
    sc("%lld%lld",&n,&m);
    FOR(i,0,n-1){
    sc("%lld",&arr[i]);
    high+=arr[i];
    low=max(low,arr[i]);
    }
    ll  mx;

    while(low<high){
            ll  cnt=1,sum=0;
        ll  mid=(low+high)/2;
        for(i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                    sum=arr[i];
                cnt++;
            }
        }
        if(cnt<=m) high = mid;
        else low=mid+1;
    }
    pr("Case %lld: %lld\n",++m1,high);
    }
}

