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
    int n,test,te=0;
    sc("%d",&test);
    while(test--){
        sc("%d",&n);
        int sum=0,t,i;
        FOR(i,0,n-1){
        sc("%d",&t);
        if(t>0)sum+=t;
        }
        pr("Case %d: %d\n",++te,sum);
    }
}

