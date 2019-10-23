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
dd pi = 2 * acos (0.0);
int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--){
    dd r;
    sc("%lf",&r);
    dd Area_circle=pi*r*r;
    dd A=r*2;
    dd Area_Square=A*A;
    pr("Case %d: %.2lf\n",++te,Area_Square-Area_circle);
}
}

