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
    int n,m,i;
    sc("%d%d",&n,&m);
    for( i=1; ;i++){
        n=n*3;
        m=m*2;
        if(n>m)
            break;
    }
    pr("%d\n",i);
}
