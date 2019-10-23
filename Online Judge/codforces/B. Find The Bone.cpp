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
long long int arr[1000005],extra[1000006];
int main()
{
    long long int n,m,k;
  //  map<int,int>mp;
    sc("%lld%lld%lld",&n,&m,&k);
    for(int i=0;i<m;i++){
        sc("%lld",&arr[i]);
        extra[arr[i]]=1;
    }
    long long int pls=1,f=0;
    while(k--){
        long long int a,b;
        sc("%lld%lld",&a,&b);
        if(f==0){
        if(a==pls){
            pls=b;
            if(extra[pls]==1)
                f=1;
        }
        else if(b==pls){
            pls=a;
            if(extra[pls]==1)
                f=1;
        }
        }

    }
    if(extra[1]==1)
        pls=1;
    pr("%lld\n",pls);
}
