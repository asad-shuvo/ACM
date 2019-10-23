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
#define mx 1000
int main()
{
    ll n,m,arr[100005],cnt=0;
    sc("%lld%lld",&n,&m);
    for(int i=0;i<m;i++)sc("%lld",&arr[i]);
    for(int i=0;i<m;i++)
    {
        if(i==0){
            cnt+=(arr[i]-1);
            //cout<<cnt<<endl;
        }
        else{
            if(arr[i]<arr[i-1]){
                cnt+=((n-arr[i-1])+arr[i]);
                //cout<<cnt<<endl;
            }
            else if(arr[i]>arr[i-1]){cnt+=(arr[i]-arr[i-1]);}//cout<<cnt<<endl;}
            else if(arr[i]==arr[i-1])cnt=cnt;
        }
    }
    cout<<cnt<<endl;
}

