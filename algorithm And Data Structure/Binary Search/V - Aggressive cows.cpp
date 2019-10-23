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
    ll N,C,i,arr[100005],test;
    sc("%lld",&test);
    while(test--){
    sc("%lld%lld",&N,&C);
    FOR(i,0,N-1){
    sc("%lld",&arr[i]);
    }
    sort(arr,arr+N);
    ll low=0,high=arr[N-1];
    ll mx=-1,mid;
    while(low<=high){
        ll start=arr[0];
        ll mn=1000000000000000;
         mid=(low+high)/2;
        ll cnt=1;

        for(i=0;i<N;i++){
            if(arr[i]-start>=mid){
                mn=min(mn,arr[i]-start);
                start=arr[i];
                cnt++;
            }
        }
        if(cnt>=C){
        mx=max(mx,mn);
        }
        if(cnt>=C)
            low=mid+1;
        if(cnt<C)
            high=mid-1;
    }
    pr("%lld\n",mx);
}
    //cout<<mx<<endl;
}

